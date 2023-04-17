#!/usr/bin/python3
""" 
User class
"""

class User:
    """A user class with an email property"""
    
    def __init__(self):
        """Initialize the user with a None email"""
        self._email = None

    @property
    def email(self):
        """Return the user's email"""
        return self._email

    @email.setter
    def email(self, value):
        """Set the user's email"""
        if not isinstance(value, str):
            raise TypeError("Email must be a string")
        self._email = value

    @property
    def email(self):
        """ Documentation """
        return self.__email
   
    
if __name__ == "__main__":

    u = User()
    u.email = "john@snow.com"
    print(u.email)
