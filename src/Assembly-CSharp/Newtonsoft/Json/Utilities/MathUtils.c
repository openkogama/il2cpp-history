
/* Boolean ApproxEquals(Double, Double) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_ApproxEquals
               (double d1,double d2,MethodInfo *method)

{
  return (double)CONCAT44((uint)((ulonglong)(d1 - d2) >> 0x20) & _UNK_?,
                          SUB84(d1 - d2,0) & _UNK_?) <
         (double)CONCAT44((uint)((ulonglong)d1 >> 0x20) & _UNK_?,SUB84(d1,0) & _UNK_?)
         * _UNK_?;
}


/* Int32 GetDecimalPlaces(Double) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_GetDecimalPlaces
                  (double value,MethodInfo *method)

{
  if (value != _UNK_?) {
    dVar1 = _UNK_?;
    func_?();
    fVar2 = (float10)func_?(value);
    dVar3 = value - (double)fVar2;
    for (iVar4 = 0; (dVar1 < dVar3 && (iVar4 < 10)); iVar4 = iVar4 + 1) {
      value = value * _UNK_?;
      fVar2 = (float10)func_?(value);
      dVar3 = value - (double)fVar2;
    }
    return iVar4;
  }
  return 0;
}


/* Int32 HexToInt(Char) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_HexToInt
                  (uint16_t h,MethodInfo *method)

{
  if ((0x2f < h) && (h < 0x3a)) {
    return h - 0x30;
  }
  if ((0x60 < h) && (h < 0x67)) {
    return h - 0x57;
  }
  if ((0x40 < h) && (h < 0x47)) {
    return h - 0x37;
  }
  return -1;
}


/* Int32 IntLength(Int32) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_IntLength
                  (int32_t i,MethodInfo *method)

{
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (-1 < i) {
    if (i != 0) {
      dVar3 = (double)i;
      func_?();
      fVar4 = (float10)func_?(dVar3);
      return (int)fVar4 + 1;
    }
    return 1;
  }
  this = (ArgumentOutOfRangeException *)func_?();
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
            (this,(MethodInfo *)0x0);
  uVar5 = CONCAT44(uVar1,MethodInfo__Newtonsoft__Json__Utilities__MathUtils__IntLength_int_);
  uVar1 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)(uVar1,uVar5);
  return iVar7;
}


/* Char IntToHex(Int32) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_IntToHex
                   (int32_t n,MethodInfo *method)

{
  if (9 < n) {
    return (short)n + 0x57;
  }
  return (short)n + 0x30;
}


/* Nullable`1[Int32] Max(Nullable`1[Int32], Nullable`1[Int32]) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Max
          (Nullable_1_Int32_ val1,Nullable_1_Int32_ val2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&val1,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar1 != '\0') {
    cVar1 = func_?(&val2,MethodInfo__System__Nullable<int>__get_HasValue__);
    if (cVar1 != '\0') {
      iVar2 = func_?(&val1,MethodInfo__System__Nullable<int>__get_Value__);
      b = func_?(&val2,MethodInfo__System__Nullable<int>__get_Value__);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2(iVar2,b,(MethodInfo *)0x0)
      ;
      NStack_3.value = 0;
      NStack_3.has_value = 0;
      NStack_3._5_3_ = 0;
      func_?(&NStack_3,iVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
      return NStack_3;
    }
    return val1;
  }
  return val2;
}


/* Nullable`1[Double] Max(Nullable`1[Double], Nullable`1[Double]) */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Max_1
          (Nullable_1_Double_ *__return_storage_ptr__,Nullable_1_Double_ val1,
          Nullable_1_Double_ val2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<double>__get_HasValue__);
  if (bVar1 != 0) {
    bVar1 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&val1.field_0xc,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar1 != 0) {
      fVar2 = (float10)func_?();
      fVar3 = (float10)func_?();
      mscorlib.dll::System::Math::Math_Max_1((double)fVar2,(double)fVar3,(MethodInfo *)0x0);
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      func_?();
      *(undefined4 *)&__return_storage_ptr__->value = uVar4;
      *(int *)((int)&__return_storage_ptr__->value + 4) = (int)uVar5;
      *(int *)&__return_storage_ptr__->has_value = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar6;
      return __return_storage_ptr__;
    }
    *(SubscribableVariableBase_1_System_Boolean___Class **)&__return_storage_ptr__->value =
         in_stack_7;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val1.value._0_4_;
    *(undefined4 *)&__return_storage_ptr__->has_value = val1.value._4_4_;
    __return_storage_ptr__->field_0xc = val1.has_value;
    *(undefined3 *)&__return_storage_ptr__->field_0xd = val1._9_3_;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->value = val1._12_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val2.value._0_4_;
  *(undefined4 *)&__return_storage_ptr__->has_value = val2.value._4_4_;
  __return_storage_ptr__->field_0xc = val2.has_value;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = val2._9_3_;
  return __return_storage_ptr__;
}


/* Nullable`1[Int32] Min(Nullable`1[Int32], Nullable`1[Int32]) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Min
          (Nullable_1_Int32_ val1,Nullable_1_Int32_ val2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&val1,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar1 != '\0') {
    cVar1 = func_?(&val2,MethodInfo__System__Nullable<int>__get_HasValue__);
    if (cVar1 != '\0') {
      iVar2 = func_?(&val1,MethodInfo__System__Nullable<int>__get_Value__);
      b = func_?(&val2,MethodInfo__System__Nullable<int>__get_Value__);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min_1(iVar2,b,(MethodInfo *)0x0)
      ;
      NStack_3.value = 0;
      NStack_3.has_value = 0;
      NStack_3._5_3_ = 0;
      func_?(&NStack_3,iVar2,MethodInfo__System__Nullable<int>__Nullable_int_);
      return NStack_3;
    }
    return val1;
  }
  return val2;
}


/* Nullable`1[Double] Min(Nullable`1[Double], Nullable`1[Double]) */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Min_1
          (Nullable_1_Double_ *__return_storage_ptr__,Nullable_1_Double_ val1,
          Nullable_1_Double_ val2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SubscribableVariableBase`1[System::Boolean]::
          SubscribableVariableBase_1_System_Boolean__get_Value
                    ((SubscribableVariableBase_1_System_Boolean_ *)&stack0x00000008,
                     MethodInfo__System__Nullable<double>__get_HasValue__);
  if (bVar1 != 0) {
    bVar1 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)&val1.field_0xc,
                       MethodInfo__System__Nullable<double>__get_HasValue__);
    if (bVar1 != 0) {
      fVar2 = (float10)func_?();
      fVar3 = (float10)func_?();
      mscorlib.dll::System::Math::Math_Min((double)fVar2,(double)fVar3,(MethodInfo *)0x0);
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      func_?();
      *(undefined4 *)&__return_storage_ptr__->value = uVar4;
      *(int *)((int)&__return_storage_ptr__->value + 4) = (int)uVar5;
      *(int *)&__return_storage_ptr__->has_value = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar6;
      return __return_storage_ptr__;
    }
    *(SubscribableVariableBase_1_System_Boolean___Class **)&__return_storage_ptr__->value =
         in_stack_7;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val1.value._0_4_;
    *(undefined4 *)&__return_storage_ptr__->has_value = val1.value._4_4_;
    __return_storage_ptr__->field_0xc = val1.has_value;
    *(undefined3 *)&__return_storage_ptr__->field_0xd = val1._9_3_;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->value = val1._12_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val2.value._0_4_;
  *(undefined4 *)&__return_storage_ptr__->has_value = val2.value._4_4_;
  __return_storage_ptr__->field_0xc = val2.has_value;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = val2._9_3_;
  return __return_storage_ptr__;
}

