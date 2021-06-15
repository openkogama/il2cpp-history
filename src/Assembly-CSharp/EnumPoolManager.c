
/* Void Awake() */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Awake
               (EnumPoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).pool;
  if (pLVar1 != (List_1_Pool_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<Pool>__get_Count__);
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).pool;
      if (pLVar1 == (List_1_Pool_ *)0x0) break;
      this_00 = (Pool *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_
                                  );
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 == (Pool *)0x0) break;
      Pool::Pool_Initialize(this_00,parent,(MethodInfo *)0x0);
      pLVar1 = (this->fields).pool;
      pPVar3 = (this->fields).lookupTable;
      if (((pLVar1 == (List_1_Pool_ *)0x0) ||
          (pSVar4 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_
                                 ),
          pSVar4 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)0x0)) ||
         (pOVar2 = System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             (pSVar4,(MethodInfo *)0x0), pPVar3 == (Pool__Array *)0x0)) break;
      if ((Object *)pPVar3->max_length <= pOVar2) goto code_?;
      pLVar1 = (this->fields).pool;
      if (pPVar3->vector[(int)pOVar2] == (Pool *)0x0) {
        pPVar3 = (this->fields).lookupTable;
        if ((pLVar1 == (List_1_Pool_ *)0x0) ||
           (pSVar4 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_
                                  ),
           pSVar4 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)0x0)) break;
        System.dll::System::Collections::Generic::
        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
        Single,System::Object]::
        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                  (pSVar4,(MethodInfo *)0x0);
        pLVar1 = (this->fields).pool;
        if ((pLVar1 == (List_1_Pool_ *)0x0) ||
           (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_),
           pPVar3 == (Pool__Array *)0x0)) break;
        func_?();
        func_?();
      }
      else {
        if ((pLVar1 == (List_1_Pool_ *)0x0) ||
           (pSVar4 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_
                                  ),
           pSVar4 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)0x0)) break;
        System.dll::System::Collections::Generic::
        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
        Single,System::Object]::
        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                  (pSVar4,(MethodInfo *)0x0);
        iVar5 = func_?();
        if (iVar5 == 0) break;
        pOVar2 = (Object *)func_?(3,iVar5);
        func_?(iVar5);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Format
                            (StringLiteral_A_pool_of_type__s_does_already_e,pOVar2,(MethodInfo *)0x0
                            );
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).pool;
      index = index + 1;
      if (pLVar1 == (List_1_Pool_ *)0x0) break;
    }
  }
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ImpulseRay Instantiate[ImpulseRay](PoolEnums) */

ImpulseRay *
Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Instantiate_18
          (EnumPoolManager *this,PoolEnums__Enum pEnum,MethodInfo *method)

{
  pPVar1 = (this->fields).lookupTable;
  if (pPVar1 != (Pool__Array *)0x0) {
    if (pPVar1->max_length <= pEnum) goto code_?;
    if (pPVar1->vector[pEnum] != (Pool *)0x0) {
      pIVar2 = (ImpulseRay *)
               (*(code *)(*method->parameters)->data)(pPVar1->vector[pEnum],*method->parameters);
      return pIVar2;
    }
  }
  func_?(0);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pIVar2 = (ImpulseRay *)(*pcVar4)();
  return pIVar2;
}


/* Void Return(MonoBehaviour, PoolEnums) */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Return
               (EnumPoolManager *this,MonoBehaviour *obj,PoolEnums__Enum pEnum,MethodInfo *method)

{
  pPVar1 = (this->fields).lookupTable;
  if (pPVar1 != (Pool__Array *)0x0) {
    if (pPVar1->max_length <= pEnum) goto code_?;
    if (pPVar1->vector[pEnum] != (Pool *)0x0) {
      Pool::Pool_ReturnObject(pPVar1->vector[pEnum],obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* EnumPoolManager() */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager__ctor
               (EnumPoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (Pool__Array *)func_?(TypeInfo__Pool,0x1f);
  (this->fields).lookupTable = pPVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

