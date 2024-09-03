
/* Void Add(RaycastHit) */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
               (PhysicsCollisionDatasWrapper *this,RaycastHit hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                   );
    func_?(&StringLiteral_PhysicsCollisionData_length_exce);
    cRam_? = '\x01';
  }
  if ((this->fields).length < 100) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).physicsCollisionDatas;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this->fields).length,
                         MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                        );
      if (RVar1 != (RegexCharClass_SingleRange)0x0) {
        pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                           ((Regex_CachedCodeEntryKey *)&MStack_3,
                            (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&stack0xffffffc4,(MethodInfo *)0x0);
        pSVar4 = pRVar2->_pattern;
        *(undefined8 *)((int)RVar1 + 8) = *(undefined8 *)pRVar2;
        *(String **)((int)RVar1 + 0x10) = pSVar4;
        pCVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           ((RaycastHit *)&stack0xffffffc4,(MethodInfo *)0x0);
        if (pCVar5 != (Collider *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pCVar5,(MethodInfo *)0x0);
          *(Transform **)((int)RVar1 + 0x14) = pTVar6;
          func_?();
          *(undefined1 *)((int)RVar1 + 0x18) = 0;
          fVar7 = RTG::SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                            ((SphereTreeNode_1_System_Object_ *)&stack0xffffffc4,(MethodInfo *)0x0);
          *(float *)((int)RVar1 + 0x1c) = fVar7;
          pMVar8 = mscorlib.dll::System::Tuple`3[Object,Memory`1[Byte],Object]::
                   Tuple_3_Object_Memory_1_Byte_Object__get_Item2
                             (&MStack_3,(Tuple_3_Object_Memory_1_Byte_Object_ *)&stack0xffffffc4,
                              (MethodInfo *)0x0);
          iVar9 = pMVar8->_length;
          *(undefined8 *)((int)RVar1 + 0x20) = *(undefined8 *)pMVar8;
          *(int32_t *)((int)RVar1 + 0x28) = iVar9;
          pCVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                             ((RaycastHit *)&stack0xffffffc4,(MethodInfo *)0x0);
          *(Collider **)((int)RVar1 + 0x2c) = pCVar5;
          func_?();
          (this->fields).length = (this->fields).length + 1;
          return;
        }
      }
    }
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_PhysicsCollisionData_length_exce,(MethodInfo *)0x0);
  return;
}


/* Void Add(Collider, Vector3) */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
               (PhysicsCollisionDatasWrapper *this,Collider *collider,Vector3 origin,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                   );
    func_?(&StringLiteral_PhysicsCollisionData_length_exce);
    cRam_? = '\x01';
  }
  if ((this->fields).length < 100) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).physicsCollisionDatas;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this->fields).length,
                         MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                        );
      if (RVar1 != (RegexCharClass_SingleRange)0x0) {
        *(undefined8 *)((int)RVar1 + 8) = origin._0_8_;
        *(float *)((int)RVar1 + 0x10) = origin.z;
        if (collider != (Collider *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)collider,(MethodInfo *)0x0);
          *(Transform **)((int)RVar1 + 0x14) = pTVar2;
          func_?((int)RVar1 + 0x14,pTVar2);
          *(undefined1 *)((int)RVar1 + 0x18) = 1;
          *(undefined4 *)((int)RVar1 + 0x1c) = 0;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
          *(undefined8 *)((int)RVar1 + 0x20) =
               *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
          *(float *)((int)RVar1 + 0x28) = fVar3;
          *(Collider **)((int)RVar1 + 0x2c) = collider;
          func_?((int)RVar1 + 0x2c);
          (this->fields).length = (this->fields).length + 1;
          return;
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_PhysicsCollisionData_length_exce,(MethodInfo *)0x0);
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear
               (PhysicsCollisionDatasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  if (0 < (this->fields).length) {
    do {
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).physicsCollisionDatas;
      if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      *(undefined4 *)((int)RVar3 + 0x2c) = 0;
      func_?((int)RVar3 + 0x2c,0);
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).physicsCollisionDatas;
      if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      *(undefined4 *)((int)RVar3 + 0x14) = 0;
      func_?((int)RVar3 + 0x14,0);
      index = index + 1;
    } while (index < (this->fields).length);
  }
  (this->fields).length = 0;
  return;
}


/* PhysicsCollisionDatasWrapper() */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper__ctor
               (PhysicsCollisionDatasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>);
    func_?(&TypeInfo__PhysicsCollisionData);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>;
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,100,
             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_);
  method_00 = (MethodInfo *)&(this->fields).physicsCollisionDatas;
  (this->fields).physicsCollisionDatas = (List_1_PhysicsCollisionData_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  iVar1 = 0;
  this_00 = (this->fields).physicsCollisionDatas;
  while (this_00 != (List_1_PhysicsCollisionData_ *)0x0) {
    iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
            SparselyPopulatedArrayFragment_1_System_Object__get_Length
                      ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_00,
                       MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                      );
    if (iVar2 <= iVar1) {
      return;
    }
    this_02 = (List_1_PhysicsCollisionData___Class *)(this->fields).physicsCollisionDatas;
    this = (PhysicsCollisionDatasWrapper *)&UNK_?;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    if (this_02 == (List_1_PhysicsCollisionData___Class *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_02,value,
               MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
              );
    iVar1 = iVar1 + 1;
    this_00 = _UNK_?;
    method_01 = this_02;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PhysicsCollisionData get_Item(Int32) */

PhysicsCollisionData *
Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
          (PhysicsCollisionDatasWrapper *this,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).physicsCollisionDatas;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                      );
    return (PhysicsCollisionData *)RVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pPVar4 = (PhysicsCollisionData *)(*pcVar3)();
  return pPVar4;
}

