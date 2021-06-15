
/* Void AssignNewNumber(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigits::MVCountingCubeDigits_AssignNewNumber
               (MVCountingCubeDigits *this,int32_t newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  this_00 = (Collection_1_VoxelHit_ *)func_?(&newValue,0);
  if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    if ((int)pIVar3 < 2) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      this_00 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral__0,(String *)this_00,(MethodInfo *)0x0);
    }
    if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
      uVar4 = mscorlib.dll::System::String::String_get_Chars((String *)this_00,0,(MethodInfo *)0x0);
      uStack_1 = (uint)uVar4;
      pSVar5 = (String *)func_?(&uStack_1,0);
      value = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar5,(MethodInfo *)0x0);
      uVar4 = mscorlib.dll::System::String::String_get_Chars((String *)this_00,1,(MethodInfo *)0x0);
      uStack_2 = (uint)uVar4;
      pSVar5 = (String *)func_?(&uStack_2,0);
      value_00 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar5,(MethodInfo *)0x0);
      pMVar6 = (this->fields).FrontFirst;
      if (pMVar6 != (MVCountingCubeDigit *)0x0) {
        MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value,(MethodInfo *)0x0);
        pMVar6 = (this->fields).FrontSecond;
        if (pMVar6 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value_00,(MethodInfo *)0x0);
          pMVar6 = (this->fields).BackFirst;
          if (pMVar6 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value,(MethodInfo *)0x0);
            pMVar6 = (this->fields).BackSecond;
            if (pMVar6 != (MVCountingCubeDigit *)0x0) {
              MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value_00,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigits::MVCountingCubeDigits_set_Number
               (MVCountingCubeDigits *this,int32_t value,MethodInfo *method)

{
  iStack_1 = value;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = 0;
  uStack_2 = 0;
  this_00 = (Collection_1_VoxelHit_ *)func_?(&iStack_1,0);
  if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    if ((int)pIVar3 < 2) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      this_00 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral__0,(String *)this_00,(MethodInfo *)0x0);
    }
    if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
      uVar4 = mscorlib.dll::System::String::String_get_Chars((String *)this_00,0,(MethodInfo *)0x0);
      value = (int32_t)uVar4;
      pSVar5 = (String *)func_?(&value,0);
      value_00 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar5,(MethodInfo *)0x0);
      uVar4 = mscorlib.dll::System::String::String_get_Chars((String *)this_00,1,(MethodInfo *)0x0);
      uStack_2 = (uint)uVar4;
      pSVar5 = (String *)func_?(&uStack_2,0);
      value_01 = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar5,(MethodInfo *)0x0);
      pMVar6 = (this->fields).FrontFirst;
      if (pMVar6 != (MVCountingCubeDigit *)0x0) {
        MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value_00,(MethodInfo *)0x0);
        pMVar6 = (this->fields).FrontSecond;
        if (pMVar6 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value_01,(MethodInfo *)0x0);
          pMVar6 = (this->fields).BackFirst;
          if (pMVar6 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value_00,(MethodInfo *)0x0);
            pMVar6 = (this->fields).BackSecond;
            if (pMVar6 != (MVCountingCubeDigit *)0x0) {
              MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar6,value_01,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

