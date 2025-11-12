
/* GizmoCap2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor
               (GizmoCap2DLookAndFeel *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._color.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields)._color.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._color.a = (float)uVar5;
  (this->fields)._fillMode = 2;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._hoveredColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._hoveredColor.a = (float)uVar5;
  (this->fields)._scale = 1.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (this->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._borderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._borderColor.a = (float)uVar5;
  (this->fields)._circleRadius = 12.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar4 = _UNK_?;
  (this->fields)._hoveredBorderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields)._hoveredBorderColor.a = (float)uVar5;
  (this->fields)._quadWidth = 25.0;
  (this->fields)._quadHeight = 25.0;
  (this->fields)._arrowBaseRadius = 5.0;
  (this->fields)._arrowHeight = 20.0;
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel_set_HoveredBorderColor
               (GizmoCap2DLookAndFeel *this,Color *value,MethodInfo *method)

{
  fVar1 = value->g;
  fVar2 = value->b;
  fVar3 = value->a;
  (this->fields)._hoveredBorderColor.r = value->r;
  (this->fields)._hoveredBorderColor.g = fVar1;
  (this->fields)._hoveredBorderColor.b = fVar2;
  (this->fields)._hoveredBorderColor.a = fVar3;
  return;
}

