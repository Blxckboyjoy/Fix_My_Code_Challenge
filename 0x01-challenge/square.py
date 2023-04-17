class Square():
    
    width = 0
    height = 0

    
    def __init__(self, *args, **kwargs):
        if 'width' in kwargs:
            kwargs['height'] = kwargs['width']
        elif 'height' in kwargs:
            kwargs['width'] = kwargs['height']
        for key, value in kwargs.items():
            setattr(self, key, value)

    def area_of_my_square(self):
        """ Area of the square """
        return self.width * self.width

    def PerimeterOfMySquare(self):
        """ Perimeter of the square """
        return self.width * 4

    def __str__(self):
        return "{}/{}".format(self.width, self.height)
