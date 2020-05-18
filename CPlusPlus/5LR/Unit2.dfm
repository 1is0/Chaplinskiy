object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 460
  ClientWidth = 598
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 137
    Height = 241
    TabOrder = 0
  end
  object Memo1: TMemo
    Left = 240
    Top = 48
    Width = 105
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object Edit1: TEdit
    Left = 240
    Top = 152
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit1'
    OnChange = Edit1Change
  end
  object Button1: TButton
    Left = 8
    Top = 320
    Width = 75
    Height = 25
    Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 368
    Width = 75
    Height = 25
    Caption = #1055#1088#1086#1089#1084#1086#1090#1088#1077#1090#1100
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 8
    Top = 416
    Width = 75
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 5
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 286
    Top = 304
    Width = 75
    Height = 25
    Caption = #1091#1076#1072#1083#1080#1090#1100' '#1080#1079' '#1085#1072#1095#1072#1083#1072
    TabOrder = 6
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 286
    Top = 352
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 7
    OnClick = Button5Click
  end
  object Edit2: TEdit
    Left = 240
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 8
    Text = 'Edit2'
  end
end
