object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsToolWindow
  Caption = 'MyTree'
  ClientHeight = 373
  ClientWidth = 562
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 116
    Top = 214
    Width = 35
    Height = 19
    Caption = #1060#1048#1054
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 106
    Top = 256
    Width = 45
    Height = 19
    Caption = #1085#1086#1084#1077#1088
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object TreeView1: TTreeView
    Left = 288
    Top = 16
    Width = 130
    Height = 271
    Indent = 19
    TabOrder = 0
  end
  object StringGrid1: TStringGrid
    Left = 19
    Top = 8
    Width = 254
    Height = 185
    ColCount = 2
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 1
    ColWidths = (
      114
      133)
  end
  object Edit1: TEdit
    Left = 157
    Top = 216
    Width = 116
    Height = 21
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 157
    Top = 258
    Width = 116
    Height = 21
    TabOrder = 3
  end
  object Memo1: TMemo
    Left = 424
    Top = 16
    Width = 129
    Height = 271
    Lines.Strings = (
      'Memo1')
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 4
  end
  object Button1: TButton
    Left = 54
    Top = 302
    Width = 97
    Height = 27
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 157
    Top = 302
    Width = 92
    Height = 27
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 288
    Top = 310
    Width = 130
    Height = 27
    Caption = #1055#1086#1080#1089#1082
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button3Click
  end
  object Button5: TButton
    Left = 54
    Top = 335
    Width = 195
    Height = 28
    Caption = #1087#1086#1082#1072#1079#1072#1090#1100' '#1086#1073#1093#1086#1076#1099
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button5Click
  end
  object Button4: TButton
    Left = 424
    Top = 310
    Width = 129
    Height = 27
    Caption = #1041#1072#1083#1072#1085#1089#1080#1088#1086#1074#1082#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = Button4Click
  end
  object Button8: TButton
    Left = 288
    Top = 343
    Width = 265
    Height = 28
    Caption = #1044#1074#1077' '#1076#1086#1095'.'#1074#1077#1090#1074#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = Button8Click
  end
end
