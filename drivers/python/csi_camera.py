import cv2

class CSICamera(object):
    '''
    Define CSI Camera class
    '''
    def __init__(self, device_id=0, width=1280, height=720, frame_rate=120):
        try:
            gstreamer_str = self.gstreamer_pipeline(
                                        device_id=device_id,
                                        capture_width=width,
                                        capture_height=height,
                                        display_width=width,
                                        display_height=height,
                                        frame_rate=frame_rate
                                    )

            self.cap = cv2.VideoCapture(gstreamer_str, cv2.CAP_GSTREAMER)

            re, image = self.cap.read()

            if not re:
                raise RuntimeError('Could not read image from camera.')
            else:
                print('Camera initialized.')
        except:
            raise RuntimeError('Failed to initialize camera.')

    def gstreamer_pipeline(
            self,
            device_id=0,
            capture_width=1280,
            capture_height=720,
            display_width=1280,
            display_height=720,
            frame_rate=120
        ):
        '''
        gstreamer_pipeline returns a GStreamer pipeline for capturing from the CSI camera
        Defaults to 1920x1080 @ 30fps
        display_width and display_height determine the size of the window on the screen
        more details: https://www.waveshare.com/wiki/IMX219-160_Camera
        '''
        return (
            'nvarguscamerasrc sensor-id=%d ! video/x-raw(memory:NVMM), width=%d, height=%d, format=(string)NV12, framerate=(fraction)%d/1 ! nvvidconv ! video/x-raw, width=(int)%d, height=(int)%d, format=(string)BGRx ! videoconvert ! appsink'
            % (
                device_id,
                capture_width,
                capture_height,
                frame_rate,
                display_width,
                display_height
            )
        )

    def is_open(self):
        return self.cap.isOpened()

    def read(self):
        re, image = self.cap.read()
        if re:
            return image
        else:
            raise RuntimeError('Could not read image from camera')