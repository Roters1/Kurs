object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'LVL 2'
  ClientHeight = 417
  ClientWidth = 619
  Color = clFuchsia
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnMouseMove = FormMouseMove
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 16
    Top = 255
    Width = 65
    Height = 65
    Brush.Color = clLime
    Shape = stCircle
    Visible = False
    OnMouseDown = Shape2MouseDown
  end
  object Shape2: TShape
    Left = 16
    Top = 113
    Width = 65
    Height = 65
    Brush.Color = clLime
    Shape = stRoundRect
    Visible = False
    OnMouseDown = Shape2MouseDown
  end
  object Shape3: TShape
    Left = 16
    Top = 184
    Width = 65
    Height = 65
    Brush.Color = clLime
    Visible = False
    OnMouseDown = Shape2MouseDown
  end
  object Shape4: TShape
    Left = 455
    Top = 113
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape5: TShape
    Left = 384
    Top = 113
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape6: TShape
    Left = 526
    Top = 113
    Width = 59
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape7: TShape
    Left = 313
    Top = 184
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape8: TShape
    Left = 313
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape9: TShape
    Left = 242
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape10: TShape
    Left = 384
    Top = 255
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Shape11: TShape
    Left = 455
    Top = 184
    Width = 65
    Height = 65
    Shape = stCircle
    Visible = False
  end
  object Label1: TLabel
    Left = 16
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