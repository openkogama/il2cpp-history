
/* Void SetCounter(Int32) */

void Assembly-CSharp.dll::RollingNumberCounterAndroid::RollingNumberCounterAndroid_SetCounter
               (RollingNumberCounterAndroid *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).digits;
  if (pRVar1 != (RollingNumberDigitAndroid__Array *)0x0) {
    iVar2 = pRVar1->max_length;
    this_01 = (Collection_1_VoxelHit_ *)func_?(&value,0);
    if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      if ((int)iVar2 < (int)pIVar3) {
        uVar4 = 0;
        if (0 < (int)iVar2) {
          iVar5 = 0x10;
          while (pRVar1 = (this->fields).digits, pRVar1 != (RollingNumberDigitAndroid__Array *)0x0)
          {
            if (pRVar1->max_length <= uVar4) goto code_?;
            this_00 = *(RollingNumberDigitAndroid **)((int)pRVar1->vector + iVar5 + -0x10);
            if (this_00 == (RollingNumberDigitAndroid *)0x0) break;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      (this_00,9,(MethodInfo *)0x0);
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
            if ((int)iVar2 <= (int)uVar4) {
              return;
            }
          }
          goto code_?;
        }
      }
      else {
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
        if ((int)pIVar3 < (int)iVar2) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          iStack_6 = 0;
          pSStack_7 = TypeInfo__System__String->static_fields->Empty;
          while( true ) {
            pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
            if ((int)(iVar2 - (int)pIVar3) <= iStack_6) break;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSStack_7 = mscorlib.dll::System::String::String_Concat_2
                                  (pSStack_7,StringLiteral__0,(MethodInfo *)0x0);
            iStack_6 = iStack_6 + 1;
          }
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          this_01 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::String::String_Concat_2
                              (pSStack_7,(String *)this_01,(MethodInfo *)0x0);
        }
        uVar4 = 0;
        if (0 < (int)iVar2) {
          iStack_6 = 0x10;
          do {
            pRVar1 = (this->fields).digits;
            if (pRVar1 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
            if (pRVar1->max_length <= uVar4) goto code_?;
            pCStack_8 = *(Convert__Class **)((int)pRVar1->vector + iStack_6 + -0x10);
            if (this_01 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
            value_00 = mscorlib.dll::System::String::String_Substring_1
                                 ((String *)this_01,uVar4,1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              pCStack_8 = TypeInfo__System__Convert;
              func_?();
            }
            value_01 = mscorlib.dll::System::Convert::Convert_ToInt32_10(value_00,(MethodInfo *)0x0)
            ;
            if (pCStack_8 == (Convert__Class *)0x0) goto code_?;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      ((RollingNumberDigitAndroid *)pCStack_8,value_01,(MethodInfo *)0x0);
            uVar4 = uVar4 + 1;
            iStack_6 = iStack_6 + 4;
          } while ((int)uVar4 < (int)iVar2);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

