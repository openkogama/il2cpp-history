
/* Void SetCounter(Int32) */

void Assembly-CSharp.dll::RollingNumberCounterAndroid::RollingNumberCounterAndroid_SetCounter
               (RollingNumberCounterAndroid *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).digits;
  if (pRVar1 != (RollingNumberDigitAndroid__Array *)0x0) {
    iVar2 = pRVar1->max_length;
    str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&value,(MethodInfo *)0x0);
    if (str1 != (String *)0x0) {
      iVar3 = (str1->fields)._stringLength;
      if ((int)iVar2 < iVar3) {
        uVar4 = 0;
        if (0 < (int)iVar2) {
          iStack_5 = 0x10;
          uVar6 = _UNK_?;
          while (pRVar1 = (this->fields).digits, pRVar1 != (RollingNumberDigitAndroid__Array *)0x0)
          {
            if (pRVar1->max_length <= uVar4) goto code_?;
            iVar3 = *(int *)((int)pRVar1->vector + iStack_5 + -0x10);
            if (iVar3 == 0) break;
            *(undefined4 *)(iVar3 + 0x30) = 0;
            *(float *)(iVar3 + 0x28) =
                 (float)(*(int *)(iVar3 + 0x14) + 1) * *(float *)(iVar3 + 0x1c) -
                 (float)(*(uint *)(iVar3 + 0x18) & uVar6);
            if (*(Transform **)(iVar3 + 0x10) == (Transform *)0x0) break;
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffd4,*(Transform **)(iVar3 + 0x10),
                                (MethodInfo *)0x0);
            uVar8 = pVVar7->x;
            if (*(Transform **)(iVar3 + 0x10) == (Transform *)0x0) break;
            value_00.y = (float)*(undefined4 *)(iVar3 + 0x28);
            value_00.x = (float)uVar8;
            value_00.z = pVVar7->z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (*(Transform **)(iVar3 + 0x10),value_00,(MethodInfo *)0x0);
            uVar6 = _UNK_?;
            uVar4 = uVar4 + 1;
            fVar9 = *(float *)(iVar3 + 0x1c) * _UNK_?;
            iStack_5 = iStack_5 + 4;
            fVar10 = (float)(*(uint *)(iVar3 + 0x18) & _UNK_?);
            *(undefined4 *)(iVar3 + 0x14) = 9;
            *(float *)(iVar3 + 0x24) = fVar9 - fVar10;
            if ((int)iVar2 <= (int)uVar4) {
              return;
            }
          }
          goto code_?;
        }
      }
      else {
        if (iVar3 < (int)iVar2) {
          pSVar11 = ::StringLiteral__;
          for (iStack_5 = 0; iStack_5 < (int)(iVar2 - (str1->fields)._stringLength);
              iStack_5 = iStack_5 + 1) {
            pSVar11 = mscorlib.dll::System::String::String_Concat_3
                               (pSVar11,StringLiteral__0,(MethodInfo *)0x0);
          }
          str1 = mscorlib.dll::System::String::String_Concat_3(pSVar11,str1,(MethodInfo *)0x0);
        }
        uVar4 = 0;
        if (0 < (int)iVar2) {
          iStack_5 = 0x10;
          do {
            pRVar1 = (this->fields).digits;
            if (pRVar1 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
            if (pRVar1->max_length <= uVar4) goto code_?;
            this_00 = *(RollingNumberDigitAndroid **)((int)pRVar1->vector + iStack_5 + -0x10);
            if (str1 == (String *)0x0) goto code_?;
            pSVar11 = mscorlib.dll::System::String::String_Substring_1
                               (str1,uVar4,1,(MethodInfo *)0x0);
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            value_01 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar11,(MethodInfo *)0x0);
            if (this_00 == (RollingNumberDigitAndroid *)0x0) goto code_?;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      (this_00,value_01,(MethodInfo *)0x0);
            uVar4 = uVar4 + 1;
            iStack_5 = iStack_5 + 4;
          } while ((int)uVar4 < (int)iVar2);
        }
      }
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

