object Form6: TForm6
  Left = 0
  Top = 185
  Caption = 'LVL 4'
  ClientHeight = 417
  ClientWidth = 619
  Color = clHotLight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnMouseMove = FormMouseMove
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 8
    Top = 113
    Width = 65
    Height = 65
    Brush.Color = clOlive
    Shape = stCircle
    Visible = False
    OnMouseDown = Shape1MouseDown
  end
  object Shape2: TShape
    Left = 16
    Top = 184
    Width = 65
    Height = 65
    Brush.Color = clOlive
    Shape = stCircle
    Visible = False
    OnMouseDown = Shape1MouseDown
  end
  object Shape3: TShape
    Left = 16
    Top = 255
    Width = 65
    Height = 65
    Brush.Color = clOlive
    Shape = stRoundRect
    Visible = False
    OnMouseDown = Shape1MouseDown
  end
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 58
    Height = 35
    Caption = 'Win'
    Color = clLime
    Font.Charset = GB2312_CHARSET
    Font.Color = clLime
    Font.Height = -29
    Font.Name = 'Tahoma'
    Font.Pitch = fpFixed
    Font.Style = [fsBold, fsItalic]
    ParentColor = False
    ParentFont = False
    Visible = False
  end
  object Shape4: TShape
    Left = 16
    Top = 326
    Width = 65
    Height = 65
    Brush.Color = clOlive
    Shape = stRoundRect
    Visible = False
    OnMouseDown = Shape1MouseDown
  end
  object Shape5: TShape
    Left = 311
    Top = 113
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape6: TShape
    Left = 382
    Top = 113
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape7: TShape
    Left = 453
    Top = 184
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape8: TShape
    Left = 240
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape9: TShape
    Left = 169
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape10: TShape
    Left = 453
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape11: TShape
    Left = 240
    Top = 113
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape12: TShape
    Left = 382
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape13: TShape
    Left = 382
    Top = 184
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape14: TShape
    Left = 311
    Top = 255
    Width = 65
    Height = 65
    Brush.Color = clCaptionText
    Shape = stEllipse
    Visible = False
  end
  object Button1: TButton
    Left = 544
    Top = 392
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = Button1Click
  end
  object BitBtn1: TBitBtn
    Left = 471
    Top = 392
    Width = 75
    Height = 25
    Caption = 'Next'
    Enabled = False
    ModalResult = 1
    TabOrder = 1
  end
end
