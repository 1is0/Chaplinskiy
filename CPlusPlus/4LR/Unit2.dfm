object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'lab4(var10)'
  ClientHeight = 215
  ClientWidth = 561
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
  object Label1: TLabel
    Left = 216
    Top = 64
    Width = 145
    Height = 13
    Caption = #1054#1073#1088#1072#1090#1085#1072#1103' '#1087#1086#1083#1100#1089#1082#1072#1103' '#1079#1072#1087#1080#1089#1100
  end
  object Label2: TLabel
    Left = 366
    Top = 179
    Width = 60
    Height = 13
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090' :'
  end
  object Edit1: TEdit
    Left = 184
    Top = 10
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 224
    Top = 83
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 432
    Top = 176
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 2
  end
  object Button1: TButton
    Left = 311
    Top = 8
    Width = 82
    Height = 25
    Caption = #1055#1077#1088#1077#1074#1077#1089#1090#1080
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 432
    Top = 148
    Width = 121
    Height = 25
    Caption = #1055#1086#1089#1095#1080#1090#1072#1090#1100
    TabOrder = 4
    OnClick = Button2Click
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 129
    Height = 189
    RowCount = 6
    TabOrder = 5
  end
end
