object Form2: TForm2
  Left = 1172
  Top = 259
  Width = 435
  Height = 335
  Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 144
    Top = 248
    Width = 121
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Flat = True
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Arial Narrow'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton1Click
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 401
    Height = 25
    ColCount = 12
    DefaultColWidth = 32
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 0
    Visible = False
  end
  object Panel1: TPanel
    Left = 8
    Top = 40
    Width = 401
    Height = 193
    Color = clActiveCaption
    TabOrder = 1
    object Memo1: TMemo
      Left = 8
      Top = 16
      Width = 377
      Height = 161
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Arial'
      Font.Style = []
      Lines.Strings = (
        #1055#1088#1086#1075#1088#1072#1072#1084#1072' '#1086#1087#1088#1077#1076#1077#1083#1077#1085#1080#1103' '#1074#1086#1079#1088#1072#1089#1090#1085#1086#1075#1086' '#1088#1077#1081#1090#1080#1085#1075#1072' '#1080#1075#1088'.'
        ''
        #1056#1072#1079#1088#1072#1073#1086#1090#1072#1085#1072' '#1089#1090#1091#1076#1077#1085#1090#1072#1084#1080' '#1075#1088#1091#1087#1087#1099' '#1055#1054'-21, '
        #1070#1075#1086'-'#1047#1072#1087#1072#1076#1085#1086#1075#1086' '#1075#1086#1089#1091#1076#1072#1088#1089#1090#1074#1077#1085#1085#1086#1075#1086' '#1091#1085#1080#1074#1077#1088#1089#1080#1090#1077#1090#1072
        ''
        #1050#1086#1092#1072#1085#1086#1074#1086#1081' '#1045'.'#1057'.'
        #1058#1091#1083#1091#1087#1094#1077#1074#1086#1081' '#1040'.'#1057'.'
        ''
        '2016 ('#1089')')
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
    end
  end
end
