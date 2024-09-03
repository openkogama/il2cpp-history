
/* ColorRef() */

void Assembly-CSharp.dll::RTG::ColorRef::ColorRef__ctor(ColorRef *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._value.r = _UNK_?;
  (this->fields)._value.g = fVar3;
  (this->fields)._value.b = fVar2;
  (this->fields)._value.a = fVar1;
  return;
}


/* ColorRef(Color) */

void Assembly-CSharp.dll::RTG::ColorRef::ColorRef__ctor_1
               (ColorRef *this,Color color,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._value.r = _UNK_?;
  (this->fields)._value.g = fVar3;
  (this->fields)._value.b = fVar2;
  (this->fields)._value.a = fVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._value.r = color.r;
  (this->fields)._value.g = color.g;
  (this->fields)._value.b = color.b;
  (this->fields)._value.a = color.a;
  return;
}

