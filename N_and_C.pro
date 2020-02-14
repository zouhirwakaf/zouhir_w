QT += widgets

  HEADERS       = button.h \
                  mainwindow.h
  SOURCES       = button.cpp \
                  mainwindow.cpp \
                  main.cpp

  # install
  target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/N_and_C
  INSTALLS += target

FORMS +=

