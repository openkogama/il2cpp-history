
/* GizmoCap2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(GizmoCap2DLookAndFeel *this,MethodInfo *method)

{
  (this->fields)._color.r = 1.0;
  (this->fields)._color.g = 1.0;
  (this->fields)._color.b = 1.0;
  (this->fields)._color.a = 1.0;
  (this->fields)._fillMode = 2;
  (this->fields)._hoveredColor.r = 0.96470594;
  (this->fields)._hoveredColor.g = 0.9490197;
  (this->fields)._hoveredColor.b = 0.19607845;
  (this->fields)._hoveredColor.a = 1.0;
  (this->fields)._scale = 1.0;
  (this->fields)._borderColor.r = 1.0;
  (this->fields)._borderColor.g = 1.0;
  (this->fields)._borderColor.b = 1.0;
  (this->fields)._borderColor.a = 1.0;
  (this->fields)._circleRadius = 12.0;
  (this->fields)._hoveredBorderColor.r = 0.96470594;
  (this->fields)._hoveredBorderColor.g = 0.9490197;
  (this->fields)._hoveredBorderColor.b = 0.19607845;
  (this->fields)._hoveredBorderColor.a = 1.0;
  (this->fields)._quadWidth = 25.0;
  (this->fields)._quadHeight = 25.0;
  (this->fields)._arrowBaseRadius = 5.0;
  (this->fields)._arrowHeight = 20.0;
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel_set_HoveredBorderColor(GizmoCap2DLookAndFeel *this,Color *value,MethodInfo *method)

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

