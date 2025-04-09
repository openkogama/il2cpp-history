
/* Void Awake() */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Awake
               (EnumPoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_);
    func_?(&TypeInfo__PoolEnums);
    func_?(&StringLiteral_A_pool_of_type__s_does_already_e);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).pool;
  if (pLVar1 != (List_1_Pool_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).pool;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,index,
                         MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
      Pool::Pool_Initialize((Pool *)RVar3,parent,(MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).pool;
      pPVar4 = (this->fields).lookupTable;
      if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_),
          RVar3 == (RegexCharClass_SingleRange)0x0)) || (pPVar4 == (Pool__Array *)0x0)) break;
      if (pPVar4->max_length <= *(uint *)((int)RVar3 + 0x10)) goto code_?;
      if (pPVar4->vector[*(uint *)((int)RVar3 + 0x10)] == (Pool *)0x0) {
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).pool;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_),
           RVar3 == (RegexCharClass_SingleRange)0x0)) break;
        uVar5 = *(undefined4 *)((int)RVar3 + 0x10);
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).pool;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_),
           index == 0)) break;
        if ((RVar3 != (RegexCharClass_SingleRange)0x0) && (iVar6 = func_?(), iVar6 == 0))
        goto code_?;
        func_?(uVar5,RVar3);
      }
      else {
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).pool;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_),
           RVar3 == (RegexCharClass_SingleRange)0x0)) break;
        pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
        pSVar7 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_A_pool_of_type__s_does_already_e,(Object *)pSVar7,
                            (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar7,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).pool;
      index = index + 1;
      if (pLVar1 == (List_1_Pool_ *)0x0) break;
    }
  }
  func_?();
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Object Instantiate[Object](PoolEnums) */

Object * Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Instantiate
                   (EnumPoolManager *this,PoolEnums__Enum pEnum,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  pPVar1 = (this->fields).lookupTable;
  if (pPVar1 != (Pool__Array *)0x0) {
    if (pPVar1->max_length <= pEnum) goto code_?;
    if (pPVar1->vector[pEnum] != (Pool *)0x0) {
      pOVar2 = Pool::Pool_Instantiate
                         (pPVar1->vector[pEnum],((method->field7_0x1c).rgctx_data)->method);
      return pOVar2;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Void Return(MonoBehaviour, PoolEnums) */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Return
               (EnumPoolManager *this,MonoBehaviour *obj,PoolEnums__Enum pEnum,MethodInfo *method)

{
  pPVar1 = (this->fields).lookupTable;
  if (pPVar1 != (Pool__Array *)0x0) {
    if (pEnum < pPVar1->max_length) {
      pPVar2 = pPVar1->vector[pEnum];
      if (pPVar2 != (Pool *)0x0) {
        if (cRam_? == '\0') {
          func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pMVar3 = (pPVar2->fields).pool;
        uVar4 = 0;
        if (pMVar3 != (MonoBehaviour__Array *)0x0) {
          iVar5 = 0x10;
          do {
            if ((int)pMVar3->max_length <= (int)uVar4) {
              if (obj != (MonoBehaviour *)0x0) {
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)obj,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)pGVar6,(MethodInfo *)0x0);
                return;
              }
              break;
            }
            if (pMVar3 == (MonoBehaviour__Array *)0x0) break;
            if (pMVar3->max_length <= uVar4) goto code_?;
            x = *(Object_1 **)((int)pMVar3->vector + iVar5 + -0x10);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (x,(Object_1 *)obj,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              if ((obj != (MonoBehaviour *)0x0) &&
                 (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)obj,(MethodInfo *)0x0),
                 pGVar6 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,0,(MethodInfo *)0x0);
                this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)obj,(MethodInfo *)0x0);
                if (this_00 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (this_00,(pPVar2->fields).parent,(MethodInfo *)0x0);
                  pLVar8 = (pPVar2->fields).available;
                  if (pLVar8 != (List_1_System_Int32_ *)0x0) {
                    func_?(pLVar8,uVar4,
                                    MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                    return;
                  }
                }
              }
              break;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
            pMVar3 = (pPVar2->fields).pool;
          } while (pMVar3 != (MonoBehaviour__Array *)0x0);
        }
      }
    }
    else {
code_?:
      func_?();
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* EnumPoolManager() */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager__ctor
               (EnumPoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Pool);
    cRam_? = '\x01';
  }
  pPVar1 = (Pool__Array *)func_?(TypeInfo__Pool,0x20);
  ppPVar2 = &(this->fields).lookupTable;
  *ppPVar2 = pPVar1;
  func_?(ppPVar2,pPVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

