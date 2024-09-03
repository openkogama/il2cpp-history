
/* ColorRef() */

void Assembly-CSharp.dll::RTG::ColorRef::ColorRef__ctor(ColorRef *this,MethodInfo *method)

{
  (this->fields)._value.r = 1.0;
  (this->fields)._value.g = 1.0;
  (this->fields)._value.b = 1.0;
  (this->fields)._value.a = 1.0;
  return;
}


/* ColorRef(Color) */

void Assembly-CSharp.dll::RTG::ColorRef::ColorRef__ctor_1(ColorRef *this,Color color,MethodInfo *method)

{
  (this->fields)._value.r = 1.0;
  (this->fields)._value.g = 1.0;
  (this->fields)._value.b = 1.0;
  (this->fields)._value.a = 1.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._value.r = color.r;
  (this->fields)._value.g = color.g;
  (this->fields)._value.b = color.b;
  (this->fields)._value.a = color.a;
  return;
}

