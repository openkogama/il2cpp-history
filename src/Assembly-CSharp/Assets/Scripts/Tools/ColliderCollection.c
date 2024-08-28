
/* Void CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::ColliderCollection_CopyTo
               (ColliderCollection *this,Array *array,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Collider);
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__CopyTo_UnityEngine__Collider_____int_
                   );
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__UnityEngine__Collider;
  method_00 = 
  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__CopyTo_UnityEngine__Collider_____int_
  ;
  this_00 = (this->fields).colliders;
  if (this_00 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    if (array == (Array *)0x0) {
      array_00 = (Object__Array *)0x0;
    }
    else {
      array_00 = (Object__Array *)func_?(array,TypeInfo__UnityEngine__Collider);
      unaff_EBX = pCVar1;
      if (array_00 == (Object__Array *)0x0) goto code_?;
    }
    System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
    LinkedList_1_System_Object__CopyTo
              ((LinkedList_1_System_Object_ *)this_00,array_00,index,method_00);
    return;
  }
  func_?();
  array = unaff_ESI;
code_?:
  func_?(array,unaff_EBX);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::ColliderCollection_GetEnumerator
          (ColliderCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).colliders;
  if (this_00 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    pLVar1 = System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
             LinkedList_1_System_Object__GetEnumerator
                       (&LStack_2,(LinkedList_1_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    pLStack_4 = pLVar1->_node;
    iStack_5 = pLVar1->_version;
    pOStack_6 = pLVar1->_current;
    iStack_7 = pLVar1->_index;
    pIVar8 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                             ,&pLStack_3);
    return pIVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pIVar8 = (IEnumerator *)(*pcVar9)();
  return pIVar8;
}


/* Boolean RemoveCollider(Collider) */

bool Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
     ColliderCollection_RemoveCollider
               (ColliderCollection *this,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedListNode<UnityEngine::Collider>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__get_Last__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  y = (this->fields).baseCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)collider,(Object_1 *)y,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields).colliders;
    if (this_00 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
      bVar1 = System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
              LinkedList_1_System_Object__Remove
                        ((LinkedList_1_System_Object_ *)this_00,(Object *)collider,
                         MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
                        );
      this_01 = (LinkedList_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_ *)
                (this->fields).colliders;
      if (this_01 != (LinkedList_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_ *)0x0) {
        pLVar2 = System.dll::System::Collections::Generic::LinkedList`1[UnityEngine::UIElements::UIR
                 ::UIRenderDevice+DeviceToFree]::
                 LinkedList_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree__get_Last
                           (this_01,
                            MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__get_Last__
                           );
        if (pLVar2 != (LinkedListNode_1_UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_ *)
                      0x0) {
          (this->fields).activeCollider = (Collider *)(pLVar2->fields).item.handle;
          func_?();
          return bVar1;
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  return 0;
}


/* Void SetActiveCollider(Collider) */

void Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
     ColliderCollection_SetActiveCollider
               (ColliderCollection *this,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).colliders;
  if (pLVar1 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
    LinkedList_1_System_Object__Remove
              ((LinkedList_1_System_Object_ *)pLVar1,(Object *)collider,
               MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
              );
    pLVar1 = (this->fields).colliders;
    if (pLVar1 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
      System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
      LinkedList_1_System_Object__AddLast
                ((LinkedList_1_System_Object_ *)pLVar1,(Object *)collider,
                 MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                );
      ppCVar2 = &(this->fields).activeCollider;
      *ppCVar2 = collider;
      func_?(ppCVar2,collider);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator`1[UnityEngine.Collider]
   System.Collections.Generic.IEnumerable<UnityEngine.Collider>.GetEnumerator() */

IEnumerator_1_UnityEngine_Collider_ *
Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
ColliderCollection_System_Collections_Generic_IEnumerable_UnityEngine_Collider__GetEnumerator
          (ColliderCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).colliders;
  if (this_00 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    pLVar1 = System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
             LinkedList_1_System_Object__GetEnumerator
                       (&LStack_2,(LinkedList_1_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    pLStack_4 = pLVar1->_node;
    iStack_5 = pLVar1->_version;
    pOStack_6 = pLVar1->_current;
    iStack_7 = pLVar1->_index;
    pIVar8 = (IEnumerator_1_UnityEngine_Collider_ *)
             func_?(TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                             ,&pLStack_3);
    return pIVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pIVar8 = (IEnumerator_1_UnityEngine_Collider_ *)(*pcVar9)();
  return pIVar8;
}


/* ColliderCollection(Collider) */

void Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::ColliderCollection__ctor
               (ColliderCollection *this,Collider *baseCollider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__LinkedList__
                   );
    func_?(&TypeInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (LinkedList_1_UnityEngine_Collider_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>
                           );
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__LinkedList__
            );
  pCVar1 = &this->fields;
  pCVar1->colliders = this_00;
  func_?(pCVar1,this_00);
  if (pCVar1->colliders != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
    LinkedList_1_System_Object__AddLast
              ((LinkedList_1_System_Object_ *)pCVar1->colliders,(Object *)baseCollider,
               MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
              );
    ppCVar2 = &(this->fields).baseCollider;
    *ppCVar2 = baseCollider;
    func_?(ppCVar2,baseCollider);
    ppCVar2 = &(this->fields).activeCollider;
    *ppCVar2 = baseCollider;
    func_?(ppCVar2,baseCollider);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
        ColliderCollection_get_Count(ColliderCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).colliders;
  if (pLVar2 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    return (pLVar2->fields).count;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

