
/* Void Awake() */

void Assembly-CSharp.dll::BodyData::BodyData_Awake(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                   );
    cRam_? = '\x01';
  }
  BodyData_InitVariables(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).PartNames;
  value = 0;
  if (pSVar1 != (String__Array *)0x0) {
    iVar2 = 0x10;
    do {
      if ((int)pSVar1->max_length <= (int)value) {
        return;
      }
      if (pSVar1 == (String__Array *)0x0) break;
      if (pSVar1->max_length <= value) goto code_?;
      this_00 = (this->fields).partMap;
      if (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this_00,
                 *(Object **)((int)pSVar1->vector + iVar2 + -0x10),value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      pSVar1 = (this->fields).PartNames;
      value = value + 1;
      iVar2 = iVar2 + 4;
    } while (pSVar1 != (String__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 GetPartBoneSpacePosition(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartBoneSpacePosition
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).PartBoneSpacePosition;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((uint)TVar2.m_Index < pVVar1->max_length) {
        fVar3 = pVVar1->vector[TVar2.m_Index].y;
        fVar4 = pVVar1->vector[TVar2.m_Index].z;
        __return_storage_ptr__->x = pVVar1->vector[TVar2.m_Index].x;
        __return_storage_ptr__->y = fVar3;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Transform GetPartBone(String) */

Transform *
Assembly-CSharp.dll::BodyData::BodyData_GetPartBone_1
          (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).PartBones;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pTVar1 != (Transform__Array *)0x0) {
      if ((uint)TVar2.m_Index < pTVar1->max_length) {
        return pTVar1->vector[TVar2.m_Index];
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar4 = (Transform *)(*pcVar3)();
  return pTVar4;
}


/* Vector3 GetPartConstraintCenter(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintCenter
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  pOVar2 = (this->fields).PartConstraintsBoxMin;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar1,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar2 != (ObscuredFloat__Array__Array *)0x0) {
      if (pOVar2->max_length <= (uint)TVar3.m_Index) goto code_?;
      BodyData_GetVectorFromObscuredFloatArray
                ((Vector3 *)&stack0xfffffff0,pOVar2->vector[TVar3.m_Index],(MethodInfo *)0x0);
      pOVar2 = (this->fields).PartConstraintsBoxMax;
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).partMap;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)part,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                          );
        if (pOVar2 != (ObscuredFloat__Array__Array *)0x0) {
          if ((uint)TVar3.m_Index < pOVar2->max_length) {
            values = pOVar2->vector[TVar3.m_Index];
            pVVar4 = (Vector3 *)&stack0xffffffd8;
            puVar5 = &UNK_?;
            pVVar6 = BodyData_GetVectorFromObscuredFloatArray(pVVar4,values,(MethodInfo *)0x0);
            uVar7 = pVVar6->x;
            uVar8 = pVVar6->y;
            fVar9 = (pVVar6->z + (float)values) * _UNK_?;
            fVar10 = ((float)uVar8 + (float)pVVar4) * _UNK_?;
            __return_storage_ptr__->x = ((float)uVar7 + (float)puVar5) * _UNK_?;
            __return_storage_ptr__->y = fVar10;
            __return_storage_ptr__->z = fVar9;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar11)();
  return pVVar4;
}


/* Vector3 GetPartConstraintMax(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMax
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).PartConstraintsBoxMax;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if ((uint)TVar2.m_Index < pOVar1->max_length) {
        pVVar3 = BodyData_GetVectorFromObscuredFloatArray
                           ((Vector3 *)&stack0xfffffff0,pOVar1->vector[TVar2.m_Index],
                            (MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar6)();
  return pVVar3;
}


/* Vector3 GetPartConstraintMin(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMin
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).PartConstraintsBoxMin;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if ((uint)TVar2.m_Index < pOVar1->max_length) {
        pVVar3 = BodyData_GetVectorFromObscuredFloatArray
                           ((Vector3 *)&stack0xfffffff0,pOVar1->vector[TVar2.m_Index],
                            (MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar6)();
  return pVVar3;
}


/* Int32 GetPartConstraintMinCount(String) */

int32_t Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMinCount
                  (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).PartConstraintsMinCubes;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredInt__Array *)0x0) {
      if ((uint)TVar2.m_Index < pOVar1->max_length) {
        pOVar3 = pOVar1->vector + TVar2.m_Index;
        puVar4 = (undefined *)pOVar3->currentCryptoKey;
        pOVar5 = (ObscuredInt__Class *)pOVar3->hiddenValue;
        iVar6 = pOVar3->fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          puVar4 = &UNK_?;
          pOVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
          func_?();
        }
        value.hiddenValue = (int32_t)pOVar5;
        value.currentCryptoKey = (int32_t)puVar4;
        value.fakeValue = iVar6;
        value.inited = pOVar3->inited;
        value._13_3_ = *(undefined3 *)&pOVar3->field_0xd;
        iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        return iVar6;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Int32 GetPartIndex(String) */

int32_t Assembly-CSharp.dll::BodyData::BodyData_GetPartIndex
                  (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).partMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    return TVar1.m_Index;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Vector3 GetVectorFromObscuredFloatArray(ObscuredFloat[]) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetVectorFromObscuredFloatArray
                    (Vector3 *__return_storage_ptr__,ObscuredFloat__Array *values,MethodInfo *method
                    )

{
  stack0xfffffffc = unaff_EBP;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (values == (ObscuredFloat__Array *)0x0) {
    func_?();
  }
  else {
    if (values->max_length != 3) goto code_?;
    if (values->max_length != 0) {
      iVar1 = values->vector[0].currentCryptoKey;
      AVar2 = values->vector[0].hiddenValue;
      pBVar3 = values->vector[0].hiddenValueOld;
      fVar4 = values->vector[0].fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value.hiddenValue = AVar2;
      value.currentCryptoKey = iVar1;
      value.hiddenValueOld = pBVar3;
      value.fakeValue = fVar4;
      value.inited = values->vector[0].inited;
      value._17_3_ = *(undefined3 *)&values->vector[0].field_0x11;
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      if (1 < values->max_length) {
        fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit_1(values->vector[1],(MethodInfo *)0x0);
        fStack_5 = fVar4;
        if (2 < values->max_length) {
          pOVar6 = values->vector + 2;
          IStack_7.m_value = pOVar6->currentCryptoKey;
          unique0x100003cd = (pOVar6->hiddenValue).b1;
          unique0x100003ce = (pOVar6->hiddenValue).b2;
          unique0x100003cf = (pOVar6->hiddenValue).b3;
          unique0x100003d0 = (pOVar6->hiddenValue).b4;
          unique0x100003d1 = pOVar6->hiddenValueOld;
          pVVar8 = *(Vector3 **)&values->vector[2].inited;
          fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit_1(*pOVar6,(MethodInfo *)0x0);
          pVVar8->x = 0.0;
          pVVar8->y = fStack_5;
          pVVar8->z = fVar4;
          return pVVar8;
        }
      }
    }
  }
  func_?();
code_?:
  func_?(values);
  IStack_7.m_value = values->max_length;
  pSVar9 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  str0 = (String *)func_?(&StringLiteral_Invalid_length_of_obscured_float);
  pSVar9 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar9,method_00);
  uVar10 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar10);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar9,(MethodInfo *)0x0);
  uVar10 = func_?(&
                          MethodInfo__BodyData__GetVectorFromObscuredFloatArray_CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat____
                         );
  fStack_5 = (float)uVar10;
  IStack_7.m_value = (int32_t)this;
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar11)();
  return pVVar8;
}


/* Void InitVariables() */

void Assembly-CSharp.dll::BodyData::BodyData_InitVariables(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  pOVar1 = (ObscuredFloat__Array__Array *)
           func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,8);
  pOVar2 = (ObscuredFloat__Array *)
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,-4.0,(MethodInfo *)0x0);
  if (pOVar2 != (ObscuredFloat__Array *)0x0) {
    AVar5 = pOVar3->hiddenValue;
    pBVar6 = pOVar3->hiddenValueOld;
    fVar7 = pOVar3->fakeValue;
    bVar8 = pOVar3->inited;
    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar5;
    pOVar2->vector[0].hiddenValueOld = pBVar6;
    pOVar2->vector[0].fakeValue = fVar7;
    pOVar2->vector[0].inited = bVar8;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
    func_?(&pOVar2->vector[0].hiddenValueOld,0);
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,7.0,(MethodInfo *)0x0);
    AVar5 = pOVar3->hiddenValue;
    pBVar6 = pOVar3->hiddenValueOld;
    fVar7 = pOVar3->fakeValue;
    bVar8 = pOVar3->inited;
    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar5;
    pOVar2->vector[1].hiddenValueOld = pBVar6;
    pOVar2->vector[1].fakeValue = fVar7;
    pOVar2->vector[1].inited = bVar8;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
    func_?(&pOVar2->vector[1].hiddenValueOld,0);
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,-2.0,(MethodInfo *)0x0);
    AVar5 = pOVar3->hiddenValue;
    pBVar6 = pOVar3->hiddenValueOld;
    fVar7 = pOVar3->fakeValue;
    bVar8 = pOVar3->inited;
    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar5;
    pOVar2->vector[2].hiddenValueOld = pBVar6;
    pOVar2->vector[2].fakeValue = fVar7;
    pOVar2->vector[2].inited = bVar8;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
    func_?(&pOVar2->vector[2].hiddenValueOld,0);
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if (pOVar1->max_length == 0) goto code_?;
      pOVar1->vector[0] = pOVar2;
      func_?(pOVar1->vector,pOVar2);
      pOVar2 = (ObscuredFloat__Array *)
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3);
      pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,-4.0,(MethodInfo *)0x0);
      if (pOVar2 != (ObscuredFloat__Array *)0x0) {
        AVar5 = pOVar3->hiddenValue;
        pBVar6 = pOVar3->hiddenValueOld;
        fVar7 = pOVar3->fakeValue;
        bVar8 = pOVar3->inited;
        uVar9 = *(undefined3 *)&pOVar3->field_0x11;
        if (pOVar2->max_length == 0) goto code_?;
        pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
        pOVar2->vector[0].hiddenValue = AVar5;
        pOVar2->vector[0].hiddenValueOld = pBVar6;
        pOVar2->vector[0].fakeValue = fVar7;
        pOVar2->vector[0].inited = bVar8;
        *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
        func_?(&pOVar2->vector[0].hiddenValueOld,0);
        pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,2.0,(MethodInfo *)0x0);
        AVar5 = pOVar3->hiddenValue;
        pBVar6 = pOVar3->hiddenValueOld;
        fVar7 = pOVar3->fakeValue;
        bVar8 = pOVar3->inited;
        uVar9 = *(undefined3 *)&pOVar3->field_0x11;
        if (pOVar2->max_length < 2) goto code_?;
        pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
        pOVar2->vector[1].hiddenValue = AVar5;
        pOVar2->vector[1].hiddenValueOld = pBVar6;
        pOVar2->vector[1].fakeValue = fVar7;
        pOVar2->vector[1].inited = bVar8;
        *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
        func_?(&pOVar2->vector[1].hiddenValueOld,0);
        pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,-2.0,(MethodInfo *)0x0);
        AVar5 = pOVar3->hiddenValue;
        pBVar6 = pOVar3->hiddenValueOld;
        fVar7 = pOVar3->fakeValue;
        bVar8 = pOVar3->inited;
        uVar9 = *(undefined3 *)&pOVar3->field_0x11;
        if (pOVar2->max_length < 3) goto code_?;
        pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
        pOVar2->vector[2].hiddenValue = AVar5;
        pOVar2->vector[2].hiddenValueOld = pBVar6;
        pOVar2->vector[2].fakeValue = fVar7;
        pOVar2->vector[2].inited = bVar8;
        *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
        func_?(&pOVar2->vector[2].hiddenValueOld,0);
        if (pOVar1->max_length < 2) goto code_?;
        pOVar1->vector[1] = pOVar2;
        func_?(pOVar1->vector + 1,pOVar2);
        pOVar2 = (ObscuredFloat__Array *)
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3);
        pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_4,-2.0,(MethodInfo *)0x0);
        if (pOVar2 != (ObscuredFloat__Array *)0x0) {
          AVar5 = pOVar3->hiddenValue;
          pBVar6 = pOVar3->hiddenValueOld;
          fVar7 = pOVar3->fakeValue;
          bVar8 = pOVar3->inited;
          uVar9 = *(undefined3 *)&pOVar3->field_0x11;
          if (pOVar2->max_length == 0) goto code_?;
          pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
          pOVar2->vector[0].hiddenValue = AVar5;
          pOVar2->vector[0].hiddenValueOld = pBVar6;
          pOVar2->vector[0].fakeValue = fVar7;
          pOVar2->vector[0].inited = bVar8;
          *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
          func_?(&pOVar2->vector[0].hiddenValueOld,0);
          pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)auStack_4,1.0,(MethodInfo *)0x0);
          AVar5 = pOVar3->hiddenValue;
          pBVar6 = pOVar3->hiddenValueOld;
          fVar7 = pOVar3->fakeValue;
          bVar8 = pOVar3->inited;
          uVar9 = *(undefined3 *)&pOVar3->field_0x11;
          if (pOVar2->max_length < 2) goto code_?;
          pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
          pOVar2->vector[1].hiddenValue = AVar5;
          pOVar2->vector[1].hiddenValueOld = pBVar6;
          pOVar2->vector[1].fakeValue = fVar7;
          pOVar2->vector[1].inited = bVar8;
          *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
          func_?(&pOVar2->vector[1].hiddenValueOld,0);
          pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)auStack_4,-3.0,(MethodInfo *)0x0);
          AVar5 = pOVar3->hiddenValue;
          pBVar6 = pOVar3->hiddenValueOld;
          fVar7 = pOVar3->fakeValue;
          bVar8 = pOVar3->inited;
          uVar9 = *(undefined3 *)&pOVar3->field_0x11;
          if (pOVar2->max_length < 3) goto code_?;
          pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
          pOVar2->vector[2].hiddenValue = AVar5;
          pOVar2->vector[2].hiddenValueOld = pBVar6;
          pOVar2->vector[2].fakeValue = fVar7;
          pOVar2->vector[2].inited = bVar8;
          *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
          func_?(&pOVar2->vector[2].hiddenValueOld,0);
          if (pOVar1->max_length < 3) goto code_?;
          pOVar1->vector[2] = pOVar2;
          func_?(pOVar1->vector + 2,pOVar2);
          pOVar2 = (ObscuredFloat__Array *)
                    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3);
          pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)auStack_4,-2.0,(MethodInfo *)0x0);
          if (pOVar2 != (ObscuredFloat__Array *)0x0) {
            AVar5 = pOVar3->hiddenValue;
            pBVar6 = pOVar3->hiddenValueOld;
            fVar7 = pOVar3->fakeValue;
            bVar8 = pOVar3->inited;
            uVar9 = *(undefined3 *)&pOVar3->field_0x11;
            if (pOVar2->max_length == 0) goto code_?;
            pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
            pOVar2->vector[0].hiddenValue = AVar5;
            pOVar2->vector[0].hiddenValueOld = pBVar6;
            pOVar2->vector[0].fakeValue = fVar7;
            pOVar2->vector[0].inited = bVar8;
            *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
            func_?(&pOVar2->vector[0].hiddenValueOld,0);
            pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat_op_Implicit
                                ((ObscuredFloat *)auStack_4,1.0,(MethodInfo *)0x0);
            AVar5 = pOVar3->hiddenValue;
            pBVar6 = pOVar3->hiddenValueOld;
            fVar7 = pOVar3->fakeValue;
            bVar8 = pOVar3->inited;
            uVar9 = *(undefined3 *)&pOVar3->field_0x11;
            if (pOVar2->max_length < 2) goto code_?;
            pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
            pOVar2->vector[1].hiddenValue = AVar5;
            pOVar2->vector[1].hiddenValueOld = pBVar6;
            pOVar2->vector[1].fakeValue = fVar7;
            pOVar2->vector[1].inited = bVar8;
            *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
            func_?(&pOVar2->vector[1].hiddenValueOld,0);
            pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat_op_Implicit
                                ((ObscuredFloat *)auStack_4,-3.0,(MethodInfo *)0x0);
            AVar5 = pOVar3->hiddenValue;
            pBVar6 = pOVar3->hiddenValueOld;
            fVar7 = pOVar3->fakeValue;
            bVar8 = pOVar3->inited;
            uVar9 = *(undefined3 *)&pOVar3->field_0x11;
            if (pOVar2->max_length < 3) goto code_?;
            pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
            pOVar2->vector[2].hiddenValue = AVar5;
            pOVar2->vector[2].hiddenValueOld = pBVar6;
            pOVar2->vector[2].fakeValue = fVar7;
            pOVar2->vector[2].inited = bVar8;
            *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
            func_?(&pOVar2->vector[2].hiddenValueOld,0);
            if (pOVar1->max_length < 4) goto code_?;
            pOVar1->vector[3] = pOVar2;
            func_?(pOVar1->vector + 3,pOVar2);
            pOVar2 = (ObscuredFloat__Array *)
                      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3
                                     );
            pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat_op_Implicit
                                ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
            if (pOVar2 != (ObscuredFloat__Array *)0x0) {
              AVar5 = pOVar3->hiddenValue;
              pBVar6 = pOVar3->hiddenValueOld;
              fVar7 = pOVar3->fakeValue;
              bVar8 = pOVar3->inited;
              uVar9 = *(undefined3 *)&pOVar3->field_0x11;
              if (pOVar2->max_length == 0) goto code_?;
              pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
              pOVar2->vector[0].hiddenValue = AVar5;
              pOVar2->vector[0].hiddenValueOld = pBVar6;
              pOVar2->vector[0].fakeValue = fVar7;
              pOVar2->vector[0].inited = bVar8;
              *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
              func_?(&pOVar2->vector[0].hiddenValueOld,0);
              pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredFloat::ObscuredFloat_op_Implicit
                                  ((ObscuredFloat *)auStack_4,0.0,(MethodInfo *)0x0);
              AVar5 = pOVar3->hiddenValue;
              pBVar6 = pOVar3->hiddenValueOld;
              fVar7 = pOVar3->fakeValue;
              bVar8 = pOVar3->inited;
              uVar9 = *(undefined3 *)&pOVar3->field_0x11;
              if (pOVar2->max_length < 2) goto code_?;
              pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
              pOVar2->vector[1].hiddenValue = AVar5;
              pOVar2->vector[1].hiddenValueOld = pBVar6;
              pOVar2->vector[1].fakeValue = fVar7;
              pOVar2->vector[1].inited = bVar8;
              *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
              func_?(&pOVar2->vector[1].hiddenValueOld,0);
              pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredFloat::ObscuredFloat_op_Implicit
                                  ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
              AVar5 = pOVar3->hiddenValue;
              pBVar6 = pOVar3->hiddenValueOld;
              fVar7 = pOVar3->fakeValue;
              bVar8 = pOVar3->inited;
              uVar9 = *(undefined3 *)&pOVar3->field_0x11;
              if (pOVar2->max_length < 3) goto code_?;
              pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
              pOVar2->vector[2].hiddenValue = AVar5;
              pOVar2->vector[2].hiddenValueOld = pBVar6;
              pOVar2->vector[2].fakeValue = fVar7;
              pOVar2->vector[2].inited = bVar8;
              *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
              func_?(&pOVar2->vector[2].hiddenValueOld,0);
              if (pOVar1->max_length < 5) goto code_?;
              pOVar1->vector[4] = pOVar2;
              func_?(pOVar1->vector + 4,pOVar2);
              pOVar2 = (ObscuredFloat__Array *)
                        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                        ,3);
              pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredFloat::ObscuredFloat_op_Implicit
                                  ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
              if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                AVar5 = pOVar3->hiddenValue;
                pBVar6 = pOVar3->hiddenValueOld;
                fVar7 = pOVar3->fakeValue;
                bVar8 = pOVar3->inited;
                uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                if (pOVar2->max_length == 0) goto code_?;
                pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                pOVar2->vector[0].hiddenValue = AVar5;
                pOVar2->vector[0].hiddenValueOld = pBVar6;
                pOVar2->vector[0].fakeValue = fVar7;
                pOVar2->vector[0].inited = bVar8;
                *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                func_?(&pOVar2->vector[0].hiddenValueOld,0);
                pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredFloat::ObscuredFloat_op_Implicit
                                    ((ObscuredFloat *)auStack_4,0.0,(MethodInfo *)0x0);
                AVar5 = pOVar3->hiddenValue;
                pBVar6 = pOVar3->hiddenValueOld;
                fVar7 = pOVar3->fakeValue;
                bVar8 = pOVar3->inited;
                uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                if (pOVar2->max_length < 2) goto code_?;
                pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                pOVar2->vector[1].hiddenValue = AVar5;
                pOVar2->vector[1].hiddenValueOld = pBVar6;
                pOVar2->vector[1].fakeValue = fVar7;
                pOVar2->vector[1].inited = bVar8;
                *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                func_?(&pOVar2->vector[1].hiddenValueOld,0);
                pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredFloat::ObscuredFloat_op_Implicit
                                    ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
                AVar5 = pOVar3->hiddenValue;
                pBVar6 = pOVar3->hiddenValueOld;
                fVar7 = pOVar3->fakeValue;
                bVar8 = pOVar3->inited;
                uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                if (pOVar2->max_length < 3) goto code_?;
                pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                pOVar2->vector[2].hiddenValue = AVar5;
                pOVar2->vector[2].hiddenValueOld = pBVar6;
                pOVar2->vector[2].fakeValue = fVar7;
                pOVar2->vector[2].inited = bVar8;
                *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                func_?(&pOVar2->vector[2].hiddenValueOld,0);
                if (pOVar1->max_length < 6) goto code_?;
                pOVar1->vector[5] = pOVar2;
                func_?(pOVar1->vector + 5,pOVar2);
                pOVar2 = (ObscuredFloat__Array *)
                          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                          ,3);
                pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredFloat::ObscuredFloat_op_Implicit
                                    ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
                if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                  AVar5 = pOVar3->hiddenValue;
                  pBVar6 = pOVar3->hiddenValueOld;
                  fVar7 = pOVar3->fakeValue;
                  bVar8 = pOVar3->inited;
                  uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                  if (pOVar2->max_length == 0) goto code_?;
                  pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                  pOVar2->vector[0].hiddenValue = AVar5;
                  pOVar2->vector[0].hiddenValueOld = pBVar6;
                  pOVar2->vector[0].fakeValue = fVar7;
                  pOVar2->vector[0].inited = bVar8;
                  *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                  func_?(&pOVar2->vector[0].hiddenValueOld,0);
                  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredFloat::ObscuredFloat_op_Implicit
                                      ((ObscuredFloat *)auStack_4,0.0,(MethodInfo *)0x0);
                  AVar5 = pOVar3->hiddenValue;
                  pBVar6 = pOVar3->hiddenValueOld;
                  fVar7 = pOVar3->fakeValue;
                  bVar8 = pOVar3->inited;
                  uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                  if (pOVar2->max_length < 2) goto code_?;
                  pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                  pOVar2->vector[1].hiddenValue = AVar5;
                  pOVar2->vector[1].hiddenValueOld = pBVar6;
                  pOVar2->vector[1].fakeValue = fVar7;
                  pOVar2->vector[1].inited = bVar8;
                  *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                  func_?(&pOVar2->vector[1].hiddenValueOld,0);
                  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredFloat::ObscuredFloat_op_Implicit
                                      ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
                  AVar5 = pOVar3->hiddenValue;
                  pBVar6 = pOVar3->hiddenValueOld;
                  fVar7 = pOVar3->fakeValue;
                  bVar8 = pOVar3->inited;
                  uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                  if (pOVar2->max_length < 3) goto code_?;
                  pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                  pOVar2->vector[2].hiddenValue = AVar5;
                  pOVar2->vector[2].hiddenValueOld = pBVar6;
                  pOVar2->vector[2].fakeValue = fVar7;
                  pOVar2->vector[2].inited = bVar8;
                  *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                  func_?(&pOVar2->vector[2].hiddenValueOld,0);
                  if (pOVar1->max_length < 7) goto code_?;
                  pOVar1->vector[6] = pOVar2;
                  func_?(pOVar1->vector + 6,pOVar2);
                  pOVar2 = (ObscuredFloat__Array *)
                            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                            ,3);
                  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredFloat::ObscuredFloat_op_Implicit
                                      ((ObscuredFloat *)auStack_4,-1.0,(MethodInfo *)0x0);
                  if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                    AVar5 = pOVar3->hiddenValue;
                    pBVar6 = pOVar3->hiddenValueOld;
                    fVar7 = pOVar3->fakeValue;
                    bVar8 = pOVar3->inited;
                    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                    if (pOVar2->max_length == 0) goto code_?;
                    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                    pOVar2->vector[0].hiddenValue = AVar5;
                    pOVar2->vector[0].hiddenValueOld = pBVar6;
                    pOVar2->vector[0].fakeValue = fVar7;
                    pOVar2->vector[0].inited = bVar8;
                    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                    func_?(&pOVar2->vector[0].hiddenValueOld,0);
                    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredFloat::ObscuredFloat_op_Implicit
                                        ((ObscuredFloat *)auStack_4,0.0,(MethodInfo *)0x0);
                    AVar5 = pOVar3->hiddenValue;
                    pBVar6 = pOVar3->hiddenValueOld;
                    fVar7 = pOVar3->fakeValue;
                    bVar8 = pOVar3->inited;
                    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                    if (pOVar2->max_length < 2) goto code_?;
                    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                    pOVar2->vector[1].hiddenValue = AVar5;
                    pOVar2->vector[1].hiddenValueOld = pBVar6;
                    pOVar2->vector[1].fakeValue = fVar7;
                    pOVar2->vector[1].inited = bVar8;
                    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                    func_?(&pOVar2->vector[1].hiddenValueOld,0);
                    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredFloat::ObscuredFloat_op_Implicit
                                        ((ObscuredFloat *)auStack_4,-2.0,(MethodInfo *)0x0);
                    AVar5 = pOVar3->hiddenValue;
                    pBVar6 = pOVar3->hiddenValueOld;
                    fVar7 = pOVar3->fakeValue;
                    bVar8 = pOVar3->inited;
                    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                    if (pOVar2->max_length < 3) goto code_?;
                    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                    pOVar2->vector[2].hiddenValue = AVar5;
                    pOVar2->vector[2].hiddenValueOld = pBVar6;
                    pOVar2->vector[2].fakeValue = fVar7;
                    pOVar2->vector[2].inited = bVar8;
                    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                    func_?(&pOVar2->vector[2].hiddenValueOld,0);
                    if (pOVar1->max_length < 8) goto code_?;
                    pOVar1->vector[7] = pOVar2;
                    func_?(pOVar1->vector + 7,pOVar2);
                    (this->fields).PartConstraintsBoxMin = pOVar1;
                    func_?(&(this->fields).PartConstraintsBoxMin,pOVar1);
                    pOVar1 = (ObscuredFloat__Array__Array *)
                             func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                             ,8);
                    pOVar2 = (ObscuredFloat__Array *)
                              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                              ,3);
                    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredFloat::ObscuredFloat_op_Implicit
                                        ((ObscuredFloat *)auStack_4,3.0,(MethodInfo *)0x0);
                    if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                      AVar5 = pOVar3->hiddenValue;
                      pBVar6 = pOVar3->hiddenValueOld;
                      fVar7 = pOVar3->fakeValue;
                      bVar8 = pOVar3->inited;
                      uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                      if (pOVar2->max_length == 0) goto code_?;
                      pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                      pOVar2->vector[0].hiddenValue = AVar5;
                      pOVar2->vector[0].hiddenValueOld = pBVar6;
                      pOVar2->vector[0].fakeValue = fVar7;
                      pOVar2->vector[0].inited = bVar8;
                      *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                      func_?(&pOVar2->vector[0].hiddenValueOld,0);
                      pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredFloat::ObscuredFloat_op_Implicit
                                          ((ObscuredFloat *)auStack_4,14.0,(MethodInfo *)0x0);
                      AVar5 = pOVar3->hiddenValue;
                      pBVar6 = pOVar3->hiddenValueOld;
                      fVar7 = pOVar3->fakeValue;
                      bVar8 = pOVar3->inited;
                      uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                      if (pOVar2->max_length < 2) goto code_?;
                      pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                      pOVar2->vector[1].hiddenValue = AVar5;
                      pOVar2->vector[1].hiddenValueOld = pBVar6;
                      pOVar2->vector[1].fakeValue = fVar7;
                      pOVar2->vector[1].inited = bVar8;
                      *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                      func_?(&pOVar2->vector[1].hiddenValueOld,0);
                      pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredFloat::ObscuredFloat_op_Implicit
                                          ((ObscuredFloat *)auStack_4,5.0,(MethodInfo *)0x0);
                      AVar5 = pOVar3->hiddenValue;
                      pBVar6 = pOVar3->hiddenValueOld;
                      fVar7 = pOVar3->fakeValue;
                      bVar8 = pOVar3->inited;
                      uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                      if (pOVar2->max_length < 3) goto code_?;
                      pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                      pOVar2->vector[2].hiddenValue = AVar5;
                      pOVar2->vector[2].hiddenValueOld = pBVar6;
                      pOVar2->vector[2].fakeValue = fVar7;
                      pOVar2->vector[2].inited = bVar8;
                      *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                      func_?(&pOVar2->vector[2].hiddenValueOld,0);
                      if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
                        if (pOVar1->max_length == 0) goto code_?;
                        pOVar1->vector[0] = pOVar2;
                        func_?(pOVar1->vector,pOVar2);
                        pOVar2 = (ObscuredFloat__Array *)
                                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                        pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                  ::ObscuredFloat::ObscuredFloat_op_Implicit
                                            ((ObscuredFloat *)auStack_4,3.0,(MethodInfo *)0x0);
                        if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                          AVar5 = pOVar3->hiddenValue;
                          pBVar6 = pOVar3->hiddenValueOld;
                          fVar7 = pOVar3->fakeValue;
                          bVar8 = pOVar3->inited;
                          uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                          if (pOVar2->max_length == 0) goto code_?;
                          pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                          pOVar2->vector[0].hiddenValue = AVar5;
                          pOVar2->vector[0].hiddenValueOld = pBVar6;
                          pOVar2->vector[0].fakeValue = fVar7;
                          pOVar2->vector[0].inited = bVar8;
                          *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                          func_?(&pOVar2->vector[0].hiddenValueOld,0);
                          pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                    ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                              ((ObscuredFloat *)auStack_4,8.0,(MethodInfo *)0x0);
                          AVar5 = pOVar3->hiddenValue;
                          pBVar6 = pOVar3->hiddenValueOld;
                          fVar7 = pOVar3->fakeValue;
                          bVar8 = pOVar3->inited;
                          uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                          if (pOVar2->max_length < 2) goto code_?;
                          pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                          pOVar2->vector[1].hiddenValue = AVar5;
                          pOVar2->vector[1].hiddenValueOld = pBVar6;
                          pOVar2->vector[1].fakeValue = fVar7;
                          pOVar2->vector[1].inited = bVar8;
                          *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                          func_?(&pOVar2->vector[1].hiddenValueOld,0);
                          pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                    ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                              ((ObscuredFloat *)auStack_4,5.0,(MethodInfo *)0x0);
                          AVar5 = pOVar3->hiddenValue;
                          pBVar6 = pOVar3->hiddenValueOld;
                          fVar7 = pOVar3->fakeValue;
                          bVar8 = pOVar3->inited;
                          uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                          if (pOVar2->max_length < 3) goto code_?;
                          pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                          pOVar2->vector[2].hiddenValue = AVar5;
                          pOVar2->vector[2].hiddenValueOld = pBVar6;
                          pOVar2->vector[2].fakeValue = fVar7;
                          pOVar2->vector[2].inited = bVar8;
                          *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                          func_?(&pOVar2->vector[2].hiddenValueOld,0);
                          if (pOVar1->max_length < 2) goto code_?;
                          pOVar1->vector[1] = pOVar2;
                          func_?(pOVar1->vector + 1,pOVar2);
                          pOVar2 = (ObscuredFloat__Array *)
                                    func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                          pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                    ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                              ((ObscuredFloat *)auStack_4,1.0,(MethodInfo *)0x0);
                          if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                            AVar5 = pOVar3->hiddenValue;
                            pBVar6 = pOVar3->hiddenValueOld;
                            fVar7 = pOVar3->fakeValue;
                            bVar8 = pOVar3->inited;
                            uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                            if (pOVar2->max_length == 0) goto code_?;
                            pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                            pOVar2->vector[0].hiddenValue = AVar5;
                            pOVar2->vector[0].hiddenValueOld = pBVar6;
                            pOVar2->vector[0].fakeValue = fVar7;
                            pOVar2->vector[0].inited = bVar8;
                            *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                            func_?(&pOVar2->vector[0].hiddenValueOld,0);
                            pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                      ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                ((ObscuredFloat *)auStack_4,7.0,(MethodInfo *)0x0);
                            AVar5 = pOVar3->hiddenValue;
                            pBVar6 = pOVar3->hiddenValueOld;
                            fVar7 = pOVar3->fakeValue;
                            bVar8 = pOVar3->inited;
                            uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                            if (pOVar2->max_length < 2) goto code_?;
                            pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                            pOVar2->vector[1].hiddenValue = AVar5;
                            pOVar2->vector[1].hiddenValueOld = pBVar6;
                            pOVar2->vector[1].fakeValue = fVar7;
                            pOVar2->vector[1].inited = bVar8;
                            *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                            func_?(&pOVar2->vector[1].hiddenValueOld,0);
                            pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                      ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                ((ObscuredFloat *)auStack_4,-2.0,(MethodInfo *)0x0)
                            ;
                            AVar5 = pOVar3->hiddenValue;
                            pBVar6 = pOVar3->hiddenValueOld;
                            fVar7 = pOVar3->fakeValue;
                            bVar8 = pOVar3->inited;
                            uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                            if (pOVar2->max_length < 3) goto code_?;
                            pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                            pOVar2->vector[2].hiddenValue = AVar5;
                            pOVar2->vector[2].hiddenValueOld = pBVar6;
                            pOVar2->vector[2].fakeValue = fVar7;
                            pOVar2->vector[2].inited = bVar8;
                            *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                            func_?(&pOVar2->vector[2].hiddenValueOld,0);
                            if (pOVar1->max_length < 3) goto code_?;
                            pOVar1->vector[2] = pOVar2;
                            func_?(pOVar1->vector + 2,pOVar2);
                            pOVar2 = (ObscuredFloat__Array *)
                                      func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                            pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                      ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                ((ObscuredFloat *)auStack_4,1.0,(MethodInfo *)0x0);
                            if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                              AVar5 = pOVar3->hiddenValue;
                              pBVar6 = pOVar3->hiddenValueOld;
                              fVar7 = pOVar3->fakeValue;
                              bVar8 = pOVar3->inited;
                              uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                              if (pOVar2->max_length == 0) goto code_?;
                              pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                              pOVar2->vector[0].hiddenValue = AVar5;
                              pOVar2->vector[0].hiddenValueOld = pBVar6;
                              pOVar2->vector[0].fakeValue = fVar7;
                              pOVar2->vector[0].inited = bVar8;
                              *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                              func_?(&pOVar2->vector[0].hiddenValueOld,0);
                              pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                        ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                  ((ObscuredFloat *)auStack_4,7.0,(MethodInfo *)0x0
                                                  );
                              AVar5 = pOVar3->hiddenValue;
                              pBVar6 = pOVar3->hiddenValueOld;
                              fVar7 = pOVar3->fakeValue;
                              bVar8 = pOVar3->inited;
                              uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                              if (pOVar2->max_length < 2) goto code_?;
                              pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                              pOVar2->vector[1].hiddenValue = AVar5;
                              pOVar2->vector[1].hiddenValueOld = pBVar6;
                              pOVar2->vector[1].fakeValue = fVar7;
                              pOVar2->vector[1].inited = bVar8;
                              *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                              func_?(&pOVar2->vector[1].hiddenValueOld,0);
                              pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                        ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                  ((ObscuredFloat *)auStack_4,-2.0,
                                                   (MethodInfo *)0x0);
                              AVar5 = pOVar3->hiddenValue;
                              pBVar6 = pOVar3->hiddenValueOld;
                              fVar7 = pOVar3->fakeValue;
                              bVar8 = pOVar3->inited;
                              uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                              if (pOVar2->max_length < 3) goto code_?;
                              pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                              pOVar2->vector[2].hiddenValue = AVar5;
                              pOVar2->vector[2].hiddenValueOld = pBVar6;
                              pOVar2->vector[2].fakeValue = fVar7;
                              pOVar2->vector[2].inited = bVar8;
                              *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                              func_?(&pOVar2->vector[2].hiddenValueOld,0);
                              if (pOVar1->max_length < 4) goto code_?;
                              pOVar1->vector[3] = pOVar2;
                              func_?(pOVar1->vector + 3,pOVar2);
                              pOVar2 = (ObscuredFloat__Array *)
                                        func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                              pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                        ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                  ((ObscuredFloat *)auStack_4,3.0,(MethodInfo *)0x0
                                                  );
                              if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                                AVar5 = pOVar3->hiddenValue;
                                pBVar6 = pOVar3->hiddenValueOld;
                                fVar7 = pOVar3->fakeValue;
                                bVar8 = pOVar3->inited;
                                uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                if (pOVar2->max_length == 0) goto code_?;
                                pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                                pOVar2->vector[0].hiddenValue = AVar5;
                                pOVar2->vector[0].hiddenValueOld = pBVar6;
                                pOVar2->vector[0].fakeValue = fVar7;
                                pOVar2->vector[0].inited = bVar8;
                                *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                                func_?(&pOVar2->vector[0].hiddenValueOld,0);
                                pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                          ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                    ((ObscuredFloat *)auStack_4,2.0,
                                                     (MethodInfo *)0x0);
                                AVar5 = pOVar3->hiddenValue;
                                pBVar6 = pOVar3->hiddenValueOld;
                                fVar7 = pOVar3->fakeValue;
                                bVar8 = pOVar3->inited;
                                uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                if (pOVar2->max_length < 2) goto code_?;
                                pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                                pOVar2->vector[1].hiddenValue = AVar5;
                                pOVar2->vector[1].hiddenValueOld = pBVar6;
                                pOVar2->vector[1].fakeValue = fVar7;
                                pOVar2->vector[1].inited = bVar8;
                                *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                                func_?(&pOVar2->vector[1].hiddenValueOld,0);
                                pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                          ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                    ((ObscuredFloat *)auStack_4,2.0,
                                                     (MethodInfo *)0x0);
                                AVar5 = pOVar3->hiddenValue;
                                pBVar6 = pOVar3->hiddenValueOld;
                                fVar7 = pOVar3->fakeValue;
                                bVar8 = pOVar3->inited;
                                uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                if (pOVar2->max_length < 3) goto code_?;
                                pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                                pOVar2->vector[2].hiddenValue = AVar5;
                                pOVar2->vector[2].hiddenValueOld = pBVar6;
                                pOVar2->vector[2].fakeValue = fVar7;
                                pOVar2->vector[2].inited = bVar8;
                                *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                                func_?(&pOVar2->vector[2].hiddenValueOld,0);
                                if (pOVar1->max_length < 5) goto code_?;
                                pOVar1->vector[4] = pOVar2;
                                func_?(pOVar1->vector + 4,pOVar2);
                                pOVar2 = (ObscuredFloat__Array *)
                                          func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                          ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                    ((ObscuredFloat *)auStack_4,2.0,
                                                     (MethodInfo *)0x0);
                                if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                                  AVar5 = pOVar3->hiddenValue;
                                  pBVar6 = pOVar3->hiddenValueOld;
                                  fVar7 = pOVar3->fakeValue;
                                  bVar8 = pOVar3->inited;
                                  uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                  if (pOVar2->max_length == 0) goto code_?;
                                  pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                                  pOVar2->vector[0].hiddenValue = AVar5;
                                  pOVar2->vector[0].hiddenValueOld = pBVar6;
                                  pOVar2->vector[0].fakeValue = fVar7;
                                  pOVar2->vector[0].inited = bVar8;
                                  *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                                  func_?(&pOVar2->vector[0].hiddenValueOld,0);
                                  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                            ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                      ((ObscuredFloat *)auStack_4,1.0,
                                                       (MethodInfo *)0x0);
                                  AVar5 = pOVar3->hiddenValue;
                                  pBVar6 = pOVar3->hiddenValueOld;
                                  fVar7 = pOVar3->fakeValue;
                                  bVar8 = pOVar3->inited;
                                  uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                  if (pOVar2->max_length < 2) goto code_?;
                                  pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                                  pOVar2->vector[1].hiddenValue = AVar5;
                                  pOVar2->vector[1].hiddenValueOld = pBVar6;
                                  pOVar2->vector[1].fakeValue = fVar7;
                                  pOVar2->vector[1].inited = bVar8;
                                  *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                                  func_?(&pOVar2->vector[1].hiddenValueOld,0);
                                  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                            ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                      ((ObscuredFloat *)auStack_4,2.0,
                                                       (MethodInfo *)0x0);
                                  AVar5 = pOVar3->hiddenValue;
                                  pBVar6 = pOVar3->hiddenValueOld;
                                  fVar7 = pOVar3->fakeValue;
                                  bVar8 = pOVar3->inited;
                                  uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                  if (pOVar2->max_length < 3) goto code_?;
                                  pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                                  pOVar2->vector[2].hiddenValue = AVar5;
                                  pOVar2->vector[2].hiddenValueOld = pBVar6;
                                  pOVar2->vector[2].fakeValue = fVar7;
                                  pOVar2->vector[2].inited = bVar8;
                                  *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                                  func_?(&pOVar2->vector[2].hiddenValueOld,0);
                                  if (pOVar1->max_length < 6) goto code_?;
                                  pOVar1->vector[5] = pOVar2;
                                  func_?(pOVar1->vector + 5,pOVar2);
                                  pOVar2 = (ObscuredFloat__Array *)
                                            func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                            ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit
                                                      ((ObscuredFloat *)auStack_4,3.0,
                                                       (MethodInfo *)0x0);
                                  if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                                    AVar5 = pOVar3->hiddenValue;
                                    pBVar6 = pOVar3->hiddenValueOld;
                                    fVar7 = pOVar3->fakeValue;
                                    bVar8 = pOVar3->inited;
                                    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                    if (pOVar2->max_length == 0) goto code_?;
                                    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
                                    pOVar2->vector[0].hiddenValue = AVar5;
                                    pOVar2->vector[0].hiddenValueOld = pBVar6;
                                    pOVar2->vector[0].fakeValue = fVar7;
                                    pOVar2->vector[0].inited = bVar8;
                                    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                                    func_?(&pOVar2->vector[0].hiddenValueOld,0);
                                    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                              ObscuredTypes::ObscuredFloat::
                                              ObscuredFloat_op_Implicit
                                                        ((ObscuredFloat *)auStack_4,2.0,
                                                         (MethodInfo *)0x0);
                                    AVar5 = pOVar3->hiddenValue;
                                    pBVar6 = pOVar3->hiddenValueOld;
                                    fVar7 = pOVar3->fakeValue;
                                    bVar8 = pOVar3->inited;
                                    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                    if (pOVar2->max_length < 2) goto code_?;
                                    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
                                    pOVar2->vector[1].hiddenValue = AVar5;
                                    pOVar2->vector[1].hiddenValueOld = pBVar6;
                                    pOVar2->vector[1].fakeValue = fVar7;
                                    pOVar2->vector[1].inited = bVar8;
                                    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                                    func_?(&pOVar2->vector[1].hiddenValueOld,0);
                                    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                              ObscuredTypes::ObscuredFloat::
                                              ObscuredFloat_op_Implicit
                                                        ((ObscuredFloat *)auStack_4,2.0,
                                                         (MethodInfo *)0x0);
                                    AVar5 = pOVar3->hiddenValue;
                                    pBVar6 = pOVar3->hiddenValueOld;
                                    fVar7 = pOVar3->fakeValue;
                                    bVar8 = pOVar3->inited;
                                    uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                    if (pOVar2->max_length < 3) goto code_?;
                                    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
                                    pOVar2->vector[2].hiddenValue = AVar5;
                                    pOVar2->vector[2].hiddenValueOld = pBVar6;
                                    pOVar2->vector[2].fakeValue = fVar7;
                                    pOVar2->vector[2].inited = bVar8;
                                    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                                    func_?(&pOVar2->vector[2].hiddenValueOld,0);
                                    if (pOVar1->max_length < 7) goto code_?;
                                    pOVar1->vector[6] = pOVar2;
                                    func_?(pOVar1->vector + 6,pOVar2);
                                    pOVar2 = (ObscuredFloat__Array *)
                                              func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                              ObscuredTypes::ObscuredFloat::
                                              ObscuredFloat_op_Implicit
                                                        ((ObscuredFloat *)auStack_4,2.0,
                                                         (MethodInfo *)0x0);
                                    if (pOVar2 != (ObscuredFloat__Array *)0x0) {
                                      AVar5 = pOVar3->hiddenValue;
                                      pBVar6 = pOVar3->hiddenValueOld;
                                      fVar7 = pOVar3->fakeValue;
                                      bVar8 = pOVar3->inited;
                                      uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                      if (pOVar2->max_length == 0) goto code_?;
                                      pOVar2->vector[0].currentCryptoKey =
                                           pOVar3->currentCryptoKey;
                                      pOVar2->vector[0].hiddenValue = AVar5;
                                      pOVar2->vector[0].hiddenValueOld = pBVar6;
                                      pOVar2->vector[0].fakeValue = fVar7;
                                      pOVar2->vector[0].inited = bVar8;
                                      *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar9;
                                      func_?(&pOVar2->vector[0].hiddenValueOld,0);
                                      pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat
                                                ::ObscuredTypes::ObscuredFloat::
                                                ObscuredFloat_op_Implicit
                                                          ((ObscuredFloat *)auStack_4,1.0,
                                                           (MethodInfo *)0x0);
                                      AVar5 = pOVar3->hiddenValue;
                                      pBVar6 = pOVar3->hiddenValueOld;
                                      fVar7 = pOVar3->fakeValue;
                                      bVar8 = pOVar3->inited;
                                      uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                      if (pOVar2->max_length < 2) goto code_?;
                                      pOVar2->vector[1].currentCryptoKey =
                                           pOVar3->currentCryptoKey;
                                      pOVar2->vector[1].hiddenValue = AVar5;
                                      pOVar2->vector[1].hiddenValueOld = pBVar6;
                                      pOVar2->vector[1].fakeValue = fVar7;
                                      pOVar2->vector[1].inited = bVar8;
                                      *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar9;
                                      func_?(&pOVar2->vector[1].hiddenValueOld,0);
                                      pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat
                                                ::ObscuredTypes::ObscuredFloat::
                                                ObscuredFloat_op_Implicit
                                                          ((ObscuredFloat *)auStack_4,1.0,
                                                           (MethodInfo *)0x0);
                                      AVar5 = pOVar3->hiddenValue;
                                      pBVar6 = pOVar3->hiddenValueOld;
                                      fVar7 = pOVar3->fakeValue;
                                      bVar8 = pOVar3->inited;
                                      uVar9 = *(undefined3 *)&pOVar3->field_0x11;
                                      if (pOVar2->max_length < 3) goto code_?;
                                      pOVar2->vector[2].currentCryptoKey =
                                           pOVar3->currentCryptoKey;
                                      pOVar2->vector[2].hiddenValue = AVar5;
                                      pOVar2->vector[2].hiddenValueOld = pBVar6;
                                      pOVar2->vector[2].fakeValue = fVar7;
                                      pOVar2->vector[2].inited = bVar8;
                                      *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar9;
                                      func_?(&pOVar2->vector[2].hiddenValueOld,0);
                                      if (pOVar1->max_length < 8) goto code_?;
                                      pOVar1->vector[7] = pOVar2;
                                      func_?(pOVar1->vector + 7,pOVar2);
                                      (this->fields).PartConstraintsBoxMax = pOVar1;
                                      func_?(&(this->fields).PartConstraintsBoxMax,pOVar1);
                                      pOVar10 = (ObscuredInt__Array *)
                                                func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  ,8);
                                      if ((
                                          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                          ->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  );
                                      }
                                      pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat
                                                ::ObscuredTypes::ObscuredInt::
                                                ObscuredInt_op_Implicit
                                                          ((ObscuredInt *)(auStack_4 + 4),0x14,
                                                           (MethodInfo *)0x0);
                                      if (pOVar10 != (ObscuredInt__Array *)0x0) {
                                        iVar12 = pOVar11->hiddenValue;
                                        iVar13 = pOVar11->fakeValue;
                                        bVar8 = pOVar11->inited;
                                        uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                        if (pOVar10->max_length != 0) {
                                          pOVar10->vector[0].currentCryptoKey =
                                               pOVar11->currentCryptoKey;
                                          pOVar10->vector[0].hiddenValue = iVar12;
                                          pOVar10->vector[0].fakeValue = iVar13;
                                          pOVar10->vector[0].inited = bVar8;
                                          *(undefined3 *)&pOVar10->vector[0].field_0xd = uVar9;
                                          pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                    AntiCheat::ObscuredTypes::ObscuredInt::
                                                    ObscuredInt_op_Implicit
                                                              ((ObscuredInt *)(auStack_4 + 4),0x14,
                                                               (MethodInfo *)0x0);
                                          iVar12 = pOVar11->hiddenValue;
                                          iVar13 = pOVar11->fakeValue;
                                          bVar8 = pOVar11->inited;
                                          uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                          if (1 < pOVar10->max_length) {
                                            pOVar10->vector[1].currentCryptoKey =
                                                 pOVar11->currentCryptoKey;
                                            pOVar10->vector[1].hiddenValue = iVar12;
                                            pOVar10->vector[1].fakeValue = iVar13;
                                            pOVar10->vector[1].inited = bVar8;
                                            *(undefined3 *)&pOVar10->vector[1].field_0xd = uVar9;
                                            pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                      AntiCheat::ObscuredTypes::ObscuredInt::
                                                      ObscuredInt_op_Implicit
                                                                ((ObscuredInt *)(auStack_4 + 4),3,
                                                                 (MethodInfo *)0x0);
                                            iVar12 = pOVar11->hiddenValue;
                                            iVar13 = pOVar11->fakeValue;
                                            bVar8 = pOVar11->inited;
                                            uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                            if (2 < pOVar10->max_length) {
                                              pOVar10->vector[2].currentCryptoKey =
                                                   pOVar11->currentCryptoKey;
                                              pOVar10->vector[2].hiddenValue = iVar12;
                                              pOVar10->vector[2].fakeValue = iVar13;
                                              pOVar10->vector[2].inited = bVar8;
                                              *(undefined3 *)&pOVar10->vector[2].field_0xd = uVar9;
                                              pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                        AntiCheat::ObscuredTypes::ObscuredInt::
                                                        ObscuredInt_op_Implicit
                                                                  ((ObscuredInt *)(auStack_4 + 4),3
                                                                   ,(MethodInfo *)0x0);
                                              iVar12 = pOVar11->hiddenValue;
                                              iVar13 = pOVar11->fakeValue;
                                              bVar8 = pOVar11->inited;
                                              uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                              if (3 < pOVar10->max_length) {
                                                pOVar10->vector[3].currentCryptoKey =
                                                     pOVar11->currentCryptoKey;
                                                pOVar10->vector[3].hiddenValue = iVar12;
                                                pOVar10->vector[3].fakeValue = iVar13;
                                                pOVar10->vector[3].inited = bVar8;
                                                *(undefined3 *)&pOVar10->vector[3].field_0xd = uVar9
                                                ;
                                                pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                          AntiCheat::ObscuredTypes::ObscuredInt::
                                                          ObscuredInt_op_Implicit
                                                                    ((ObscuredInt *)(auStack_4 + 4)
                                                                     ,3,(MethodInfo *)0x0);
                                                iVar12 = pOVar11->hiddenValue;
                                                iVar13 = pOVar11->fakeValue;
                                                bVar8 = pOVar11->inited;
                                                uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                                if (4 < pOVar10->max_length) {
                                                  pOVar10->vector[4].currentCryptoKey =
                                                       pOVar11->currentCryptoKey;
                                                  pOVar10->vector[4].hiddenValue = iVar12;
                                                  pOVar10->vector[4].fakeValue = iVar13;
                                                  pOVar10->vector[4].inited = bVar8;
                                                  *(undefined3 *)&pOVar10->vector[4].field_0xd =
                                                       uVar9;
                                                  pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::ObscuredInt
                                                            ::ObscuredInt_op_Implicit
                                                                      ((ObscuredInt *)
                                                                       (auStack_4 + 4),3,
                                                                       (MethodInfo *)0x0);
                                                  iVar12 = pOVar11->hiddenValue;
                                                  iVar13 = pOVar11->fakeValue;
                                                  bVar8 = pOVar11->inited;
                                                  uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                                  if (5 < pOVar10->max_length) {
                                                    pOVar10->vector[5].currentCryptoKey =
                                                         pOVar11->currentCryptoKey;
                                                    pOVar10->vector[5].hiddenValue = iVar12;
                                                    pOVar10->vector[5].fakeValue = iVar13;
                                                    pOVar10->vector[5].inited = bVar8;
                                                    *(undefined3 *)&pOVar10->vector[5].field_0xd =
                                                         uVar9;
                                                    pOVar11 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredInt::ObscuredInt_op_Implicit
                                                                        ((ObscuredInt *)
                                                                         (auStack_4 + 4),3,
                                                                         (MethodInfo *)0x0);
                                                    iVar12 = pOVar11->hiddenValue;
                                                    iVar13 = pOVar11->fakeValue;
                                                    bVar8 = pOVar11->inited;
                                                    uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                                    if (6 < pOVar10->max_length) {
                                                      pOVar10->vector[6].currentCryptoKey =
                                                           pOVar11->currentCryptoKey;
                                                      pOVar10->vector[6].hiddenValue = iVar12;
                                                      pOVar10->vector[6].fakeValue = iVar13;
                                                      pOVar10->vector[6].inited = bVar8;
                                                      *(undefined3 *)&pOVar10->vector[6].field_0xd =
                                                           uVar9;
                                                      pOVar11 = Assembly-CSharp-firstpass.dll::
                                                                CodeStage::AntiCheat::ObscuredTypes
                                                                ::ObscuredInt::
                                                                ObscuredInt_op_Implicit
                                                                          ((ObscuredInt *)
                                                                           (auStack_4 + 4),3,
                                                                           (MethodInfo *)0x0);
                                                      iVar12 = pOVar11->hiddenValue;
                                                      iVar13 = pOVar11->fakeValue;
                                                      bVar8 = pOVar11->inited;
                                                      uVar9 = *(undefined3 *)&pOVar11->field_0xd;
                                                      if (7 < pOVar10->max_length) {
                                                        pOVar10->vector[7].currentCryptoKey =
                                                             pOVar11->currentCryptoKey;
                                                        pOVar10->vector[7].hiddenValue = iVar12;
                                                        pOVar10->vector[7].fakeValue = iVar13;
                                                        pOVar10->vector[7].inited = bVar8;
                                                        *(undefined3 *)&pOVar10->vector[7].field_0xd
                                                             = uVar9;
                                                        (this->fields).PartConstraintsMinCubes =
                                                             pOVar10;
                                                        func_?(&(this->fields).
                                                                         PartConstraintsMinCubes,
                                                                        pOVar10);
                                                        return;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto code_?;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* BodyData() */

void Assembly-CSharp.dll::BodyData::BodyData__ctor(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_LArm);
    func_?(&StringLiteral_Holster);
    func_?(&StringLiteral_Torso);
    func_?(&StringLiteral_LLowLeg);
    func_?(&StringLiteral_RUpLeg);
    func_?(&StringLiteral_Head);
    func_?(&StringLiteral_LUpLeg);
    func_?(&StringLiteral_RArm);
    func_?(&StringLiteral_RLowLeg);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,9);
  pSVar2 = StringLiteral_Head;
  if (pSVar1 != (String__Array *)0x0) {
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_Head;
    func_?(pSVar1->vector,pSVar2);
    pSVar2 = StringLiteral_Torso;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_Torso;
    func_?(pSVar1->vector + 1,pSVar2);
    pSVar2 = StringLiteral_RArm;
    if (pSVar1->max_length < 3) goto code_?;
    pSVar1->vector[2] = StringLiteral_RArm;
    func_?(pSVar1->vector + 2,pSVar2);
    pSVar2 = StringLiteral_LArm;
    if (pSVar1->max_length < 4) goto code_?;
    pSVar1->vector[3] = StringLiteral_LArm;
    func_?(pSVar1->vector + 3,pSVar2);
    pSVar2 = StringLiteral_RUpLeg;
    if (pSVar1->max_length < 5) goto code_?;
    pSVar1->vector[4] = StringLiteral_RUpLeg;
    func_?(pSVar1->vector + 4,pSVar2);
    pSVar2 = StringLiteral_RLowLeg;
    if (pSVar1->max_length < 6) goto code_?;
    pSVar1->vector[5] = StringLiteral_RLowLeg;
    func_?(pSVar1->vector + 5,pSVar2);
    pSVar2 = StringLiteral_LUpLeg;
    if (pSVar1->max_length < 7) goto code_?;
    pSVar1->vector[6] = StringLiteral_LUpLeg;
    func_?(pSVar1->vector + 6,pSVar2);
    pSVar2 = StringLiteral_LLowLeg;
    if (pSVar1->max_length < 8) goto code_?;
    pSVar1->vector[7] = StringLiteral_LLowLeg;
    func_?(pSVar1->vector + 7,pSVar2);
    pSVar2 = StringLiteral_Holster;
    if (pSVar1->max_length < 9) goto code_?;
    pSVar1->vector[8] = StringLiteral_Holster;
    func_?(pSVar1->vector + 8,pSVar2);
    (this->fields).PartNames = pSVar1;
    func_?(&(this->fields).PartNames,pSVar1);
    pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
    if (pVVar3 != (Vector3__Array *)0x0) {
      if (pVVar3->max_length != 0) {
        pVVar3->vector[0].x = 0.0;
        pVVar3->vector[0].y = -7.7;
        pVVar3->vector[0].z = -1.5;
        if (1 < pVVar3->max_length) {
          pVVar3->vector[1].x = 0.0;
          pVVar3->vector[1].y = -2.8;
          pVVar3->vector[1].z = -1.5;
          if (2 < pVVar3->max_length) {
            pVVar3->vector[2].x = 0.5;
            pVVar3->vector[2].y = -7.5;
            pVVar3->vector[2].z = 2.0;
            if (3 < pVVar3->max_length) {
              pVVar3->vector[3].x = 0.5;
              pVVar3->vector[3].y = -7.5;
              pVVar3->vector[3].z = 2.0;
              if (4 < pVVar3->max_length) {
                pVVar3->vector[4].x = -1.0;
                pVVar3->vector[4].y = -1.5;
                pVVar3->vector[4].z = 0.0;
                if (5 < pVVar3->max_length) {
                  pVVar3->vector[5].x = -1.0;
                  pVVar3->vector[5].y = -1.5;
                  pVVar3->vector[5].z = 0.0;
                  if (6 < pVVar3->max_length) {
                    pVVar3->vector[6].x = -1.0;
                    pVVar3->vector[6].y = -1.5;
                    pVVar3->vector[6].z = 0.0;
                    if (7 < pVVar3->max_length) {
                      pVVar3->vector[7].x = -1.0;
                      pVVar3->vector[7].y = -1.5;
                      pVVar3->vector[7].z = 0.0;
                      (this->fields).PartBoneSpacePosition = pVVar3;
                      func_?(&(this->fields).PartBoneSpacePosition,pVVar3);
                      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                 *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                                                  );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                                );
                      (this->fields).partMap = (Dictionary_2_System_String_System_Int32_ *)this_00;
                      func_?(&(this->fields).partMap,this_00);
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
                                ((MonoBehaviour *)this,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

