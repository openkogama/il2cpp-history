
/* Boolean ApproxEquals(Double, Double) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_ApproxEquals
               (double d1,double d2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  return (double)CONCAT44((uint)((ulonglong)(d1 - d2) >> 0x20) & _UNK_?,
                          SUB84(d1 - d2,0) & _UNK_?) <
         (double)CONCAT44((uint)((ulonglong)d1 >> 0x20) & _UNK_?,SUB84(d1,0) & _UNK_?)
         * _UNK_?;
}


/* Int32 GetDecimalPlaces(Double) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_GetDecimalPlaces
                  (double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  uStack_1 = mscorlib.dll::System::Math::Math_Pow
                        ((double)CONCAT44(_UNK_?,_UNK_?),
                         (double)CONCAT44(_UNK_?,_UNK_?),(MethodInfo *)0x0);
  if (value != _UNK_?) {
    iVar2 = 0;
    while( true ) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uStack_1 = (double)CONCAT44(&UNK_?,(undefined4)uStack_1);
      fVar3 = (float10)func_?();
      if ((value - (double)fVar3 <= uStack_1) || (9 < iVar2)) break;
      value = value * _UNK_?;
      iVar2 = iVar2 + 1;
    }
    return iVar2;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (-1 < i) {
    if (i != 0) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar1 = (double)i;
      func_?();
      fVar2 = (float10)func_?(dVar1);
      return (int)fVar2 + 1;
    }
    return 1;
  }
  uVar3 = func_?();
  this = (ArgumentOutOfRangeException *)func_?(uVar3);
  func_?(this);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
            (this,(MethodInfo *)0x0);
  uVar3 = func_?(&MethodInfo__Newtonsoft__Json__Utilities__MathUtils__IntLength_int_);
  func_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
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
    func_?(&TypeInfo__System__Math);
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<int>__get_Value__);
    cRam_? = '\x01';
  }
  if (val1.hasValue != 0) {
    if (val2.hasValue != 0) {
      val1_00 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                          ((Nullable_1_UInt32_ *)&val1,
                           MethodInfo__System__Nullable<int>__get_Value__);
      val2_00 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                          ((Nullable_1_UInt32_ *)&val2,
                           MethodInfo__System__Nullable<int>__get_Value__);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Math::Math_Max_2(val1_00,val2_00,(MethodInfo *)0x0);
      NVar1.hasValue = 0;
      NVar1._1_3_ = 0;
      NVar1.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                ((Nullable_1_UInt32_ *)&stack0xfffffff4,0,(MethodInfo *)0x0);
      NVar2.hasValue = NVar1.hasValue;
      uVar3._1_3_ = NVar1._1_3_;
      register0x00000008 = NVar1.value;
      return NVar2;
    }
    NVar4.value = val1.value;
    NVar4.hasValue = val1.hasValue;
    NVar4._1_3_ = val1._1_3_;
    return NVar4;
  }
  NVar5._1_3_ = val2._1_3_;
  NVar5.value = val2.value;
  NVar5.hasValue = val2.hasValue;
  return NVar5;
}


/* Nullable`1[Double] Max(Nullable`1[Double], Nullable`1[Double]) */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Max_1
          (Nullable_1_Double_ *__return_storage_ptr__,Nullable_1_Double_ val1,
          Nullable_1_Double_ val2,MethodInfo *method)

{
  this = __return_storage_ptr__;
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Nullable<double>__Nullable_double_);
    func_?(&MethodInfo__System__Nullable<double>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<double>__get_Value__);
    cRam_? = '\x01';
  }
  if (bStack1 != 0) {
    if (val1.value._4_1_ != '\0') {
      mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
                ((Nullable_1_Double_ *)&stack0x00000008,
                 MethodInfo__System__Nullable<double>__get_Value__);
      dVar2 = mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
                        ((Nullable_1_Double_ *)((int)&val1.value + 4),
                         MethodInfo__System__Nullable<double>__get_Value__);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        dVar2 = (double)CONCAT44(TypeInfo__System__Math,&UNK_?);
        func_?();
      }
      dVar2 = mscorlib.dll::System::Math::Math_Max_1(dVar2,dVar2,(MethodInfo *)0x0);
      *(undefined4 *)__return_storage_ptr__ = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
      *(undefined4 *)&__return_storage_ptr__->value = 0;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
      _bStack00000008 = MethodInfo__System__Nullable<double>__Nullable_double_;
      __return_storage_ptr__ = (Nullable_1_Double_ *)((ulonglong)dVar2 >> 0x20);
      mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double___ctor
                (this,(double)CONCAT44(MethodInfo__System__Nullable<double>__Nullable_double_,
                                       __return_storage_ptr__),(MethodInfo *)val1._0_4_);
      return this;
    }
    __return_storage_ptr__->hasValue = bStack1;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = uStack3;
    __return_storage_ptr__->field_0x4 = val1.hasValue;
    *(undefined3 *)&__return_storage_ptr__->field_0x5 = val1._1_3_;
    *(undefined4 *)&__return_storage_ptr__->value = val1._4_4_;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val1.value._0_4_;
    return __return_storage_ptr__;
  }
  *(undefined4 *)__return_storage_ptr__ = val1.value._4_4_;
  __return_storage_ptr__->field_0x4 = val2.hasValue;
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = val2._1_3_;
  *(undefined4 *)&__return_storage_ptr__->value = val2._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val2.value._0_4_;
  return __return_storage_ptr__;
}


/* Nullable`1[Int32] Min(Nullable`1[Int32], Nullable`1[Int32]) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Min
          (Nullable_1_Int32_ val1,Nullable_1_Int32_ val2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<int>__get_Value__);
    cRam_? = '\x01';
  }
  if (val1.hasValue != 0) {
    if (val2.hasValue != 0) {
      val1_00 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                          ((Nullable_1_UInt32_ *)&val1,
                           MethodInfo__System__Nullable<int>__get_Value__);
      val2_00 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                          ((Nullable_1_UInt32_ *)&val2,
                           MethodInfo__System__Nullable<int>__get_Value__);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Math::Math_Min_1(val1_00,val2_00,(MethodInfo *)0x0);
      NVar1.hasValue = 0;
      NVar1._1_3_ = 0;
      NVar1.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                ((Nullable_1_UInt32_ *)&stack0xfffffff4,0,(MethodInfo *)0x0);
      NVar2.hasValue = NVar1.hasValue;
      uVar3._1_3_ = NVar1._1_3_;
      register0x00000008 = NVar1.value;
      return NVar2;
    }
    NVar4.value = val1.value;
    NVar4.hasValue = val1.hasValue;
    NVar4._1_3_ = val1._1_3_;
    return NVar4;
  }
  NVar5._1_3_ = val2._1_3_;
  NVar5.value = val2.value;
  NVar5.hasValue = val2.hasValue;
  return NVar5;
}


/* Nullable`1[Double] Min(Nullable`1[Double], Nullable`1[Double]) */

Nullable_1_Double_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MathUtils::MathUtils_Min_1
          (Nullable_1_Double_ *__return_storage_ptr__,Nullable_1_Double_ val1,
          Nullable_1_Double_ val2,MethodInfo *method)

{
  this = __return_storage_ptr__;
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Nullable<double>__Nullable_double_);
    func_?(&MethodInfo__System__Nullable<double>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<double>__get_Value__);
    cRam_? = '\x01';
  }
  if (bStack1 != 0) {
    if (val1.value._4_1_ != '\0') {
      mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
                ((Nullable_1_Double_ *)&stack0x00000008,
                 MethodInfo__System__Nullable<double>__get_Value__);
      dVar2 = mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double__get_Value
                        ((Nullable_1_Double_ *)((int)&val1.value + 4),
                         MethodInfo__System__Nullable<double>__get_Value__);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        dVar2 = (double)CONCAT44(TypeInfo__System__Math,&UNK_?);
        func_?();
      }
      dVar2 = mscorlib.dll::System::Math::Math_Min(dVar2,dVar2,(MethodInfo *)0x0);
      *(undefined4 *)__return_storage_ptr__ = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
      *(undefined4 *)&__return_storage_ptr__->value = 0;
      *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = 0;
      _bStack00000008 = MethodInfo__System__Nullable<double>__Nullable_double_;
      __return_storage_ptr__ = (Nullable_1_Double_ *)((ulonglong)dVar2 >> 0x20);
      mscorlib.dll::System::Nullable`1[Double]::Nullable_1_Double___ctor
                (this,(double)CONCAT44(MethodInfo__System__Nullable<double>__Nullable_double_,
                                       __return_storage_ptr__),(MethodInfo *)val1._0_4_);
      return this;
    }
    __return_storage_ptr__->hasValue = bStack1;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = uStack3;
    __return_storage_ptr__->field_0x4 = val1.hasValue;
    *(undefined3 *)&__return_storage_ptr__->field_0x5 = val1._1_3_;
    *(undefined4 *)&__return_storage_ptr__->value = val1._4_4_;
    *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val1.value._0_4_;
    return __return_storage_ptr__;
  }
  *(undefined4 *)__return_storage_ptr__ = val1.value._4_4_;
  __return_storage_ptr__->field_0x4 = val2.hasValue;
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = val2._1_3_;
  *(undefined4 *)&__return_storage_ptr__->value = val2._4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->value + 4) = val2.value._0_4_;
  return __return_storage_ptr__;
}

