object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'LVL 1'
  ClientHeight = 417
  ClientWidth = 619
  Color = clYellow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  OnMouseMove = FormMouseMove
  OnShow = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Shape7: TShape
    Left = 312
    Top = 184
    Width = 65
    Height = 65
    Enabled = False
    Shape = stCircle
    Visible = False
  end
  object Shape2: TShape
    Left = 16
    Top = 112
    Width = 65
    Height = 65
    Brush.Color = clRed
    Shape = stCircle
    Visible = False
    OnMouseDown = Shape2MouseDown
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
  object Shape3: TShape
    Left = 312
    Top = 255
    Width = 65
    Height = 65
    Enabled = False
    Shape = stCircle
    Visible = False
  end
  object Shape4: TShape
    Left = 312
    Top = 113
    Width = 65
    Height = 65
    Enabled = False
    Shape = stCircle
    Visible = False
  end
  object Shape5: TShape
    Left = 454
    Top = 184
    Width = 65
    Height = 65
    Enabled = False
    Shape = stCircle
    Visible = False
  end
  object Shape6: TShape
    Left = 383
    Top = 184
    Width = 65
    Height = 65
    Enabled = False
    Shape = stCircle
    Visible = False
  end
  object Shape1: TShape
    Left = 17
    Top = 183
    Width = 57
    Height = 58
    Brush.Color = clRed
    Shape = stRoundSquare
    Visible = False
    OnMouseDown = Shape2MouseDown
  end
  object Button1: TButton
    Left = 544
    Top = 392
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = Start
  end
  object BitBtn1: TBitBtn
    Left = 463
    Top = 392
    Width = 75
    Height = 25
    Caption = 'Next'
    Enabled = False
    ModalResult = 1
    TabOrder = 1
  end
end