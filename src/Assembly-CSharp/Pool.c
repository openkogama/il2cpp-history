
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::Pool::Pool_Initialize(Pool *this,Transform *parent,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__UnityEngine__MonoBehaviour);
    func_?(&
                    UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).parent = parent;
  func_?(&(this->fields).parent,parent);
  pMVar2 = (MonoBehaviour__Array *)
           func_?(TypeInfo__UnityEngine__MonoBehaviour,(this->fields).poolSize);
  (this->fields).pool = pMVar2;
  func_?(&(this->fields).pool,pMVar2);
  capacity = (this->fields).poolSize;
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
            (this_00,capacity,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  (this->fields).available = (List_1_System_Int32_ *)this_00;
  func_?(&(this->fields).available,this_00);
  uVar5 = 0;
  if (0 < (this->fields).poolSize) {
    this = (Pool *)0x10;
    do {
      original = (pPVar1->fields).prefab;
      pMVar2 = (pPVar1->fields).pool;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                          );
      if (pMVar2 == (MonoBehaviour__Array *)0x0) goto code_?;
      if ((pOVar6 != (Object *)0x0) && (iVar7 = func_?(), iVar7 == 0))
      goto code_?;
      if (pMVar2->max_length <= uVar5) goto code_?;
      *(Object **)((int)pMVar2->vector + (int)&this[-1].fields.poolEnum) = pOVar6;
      func_?((int)pMVar2->vector + (int)&this[-1].fields.poolEnum,pOVar6);
      pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      pLVar9 = (pPVar1->fields).available;
      if (pLVar9 == (List_1_System_Int32_ *)0x0) goto code_?;
      piVar10 = &(pLVar9->fields)._version;
      *piVar10 = *piVar10 + 1;
      pIVar11 = (pLVar9->fields)._items;
      if (pIVar11 == (Int32__Array *)0x0) goto code_?;
      uVar12 = (pLVar9->fields)._size;
      if (uVar12 < pIVar11->max_length) {
        (pLVar9->fields)._size = uVar12 + 1;
        if (pIVar11->max_length <= uVar12) goto code_?;
        pIVar11->vector[uVar12] = uVar5;
      }
      else {
        (*(pMVar8->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                  (pLVar9,uVar5,pMVar8->klass->rgctx_data[0xb].rgctxDataDummy);
      }
      pMVar2 = (pPVar1->fields).pool;
      if (pMVar2 == (MonoBehaviour__Array *)0x0) goto code_?;
      if (pMVar2->max_length <= uVar5) goto code_?;
      pCVar13 = *(Component **)((int)pMVar2->vector + (int)&this[-1].fields.poolEnum);
      if ((pCVar13 == (Component *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (pCVar13,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      pMVar2 = (pPVar1->fields).pool;
      if (pMVar2 == (MonoBehaviour__Array *)0x0) goto code_?;
      if (pMVar2->max_length <= uVar5) goto code_?;
      pCVar13 = *(Component **)((int)pMVar2->vector + (int)&this[-1].fields.poolEnum);
      if ((pCVar13 == (Component *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar13,(MethodInfo *)0x0), this_02 == (Transform *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (this_02,(Transform *)&UNK_?,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
      this = (Pool *)&this->monitor;
    } while ((int)uVar5 < (pPVar1->fields).poolSize);
  }
  return;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::Pool::Pool_Instantiate(Pool *this,MethodInfo *method)

{
  pMVar1 = Pool_get_Next(this,(MethodInfo *)0x0);
  pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?(pvVar2);
  }
  pvVar3 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
    pvVar3 = (void *)func_?(pvVar3);
  }
  iVar4 = func_?(pMVar1,pvVar3);
  if (iVar4 == 0) {
    return (Object *)0x0;
  }
  pOVar5 = (Object *)func_?(iVar4,pvVar2);
  if (pOVar5 != (Object *)0x0) {
    return pOVar5;
  }
  func_?(iVar4,pvVar2);
  pcVar6 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar6)();
  return pOVar5;
}


/* Void ReturnObject(MonoBehaviour) */

void Assembly-CSharp.dll::Pool::Pool_ReturnObject(Pool *this,MonoBehaviour *obj,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  pMVar3 = (this->fields).pool;
  if (pMVar3 != (MonoBehaviour__Array *)0x0) {
    this = (Pool *)0x10;
    do {
      if ((int)pMVar3->max_length <= (int)uVar2) {
        if (obj != (MonoBehaviour *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)obj,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar4,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pMVar3 = (pPVar1->fields).pool;
      if (pMVar3 == (MonoBehaviour__Array *)0x0) break;
      if (pMVar3->max_length <= uVar2) goto code_?;
      x = *(Object_1 **)((int)pMVar3->vector + (int)&this[-1].fields.poolEnum);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)obj,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if ((obj != (MonoBehaviour *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)obj,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)obj,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_00,(pPVar1->fields).parent,(MethodInfo *)0x0);
            pLVar6 = (pPVar1->fields).available;
            if (pLVar6 != (List_1_System_Int32_ *)0x0) {
              func_?(pLVar6,uVar2,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      uVar2 = uVar2 + 1;
      pMVar3 = (pPVar1->fields).pool;
      this = (Pool *)&this->monitor;
    } while (pMVar3 != (MonoBehaviour__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MonoBehaviour get_Next() */

MonoBehaviour * Assembly-CSharp.dll::Pool::Pool_get_Next(Pool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&
                    UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).available;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      pMVar2 = (this->fields).prefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pMVar2 = (MonoBehaviour *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pMVar2,
                          UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar3 = (this->fields).available;
    if ((pLVar3 != (List_1_System_Int32_ *)0x0) &&
       (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,(pLVar3->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).available;
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
        cRam_? = '\x01';
      }
      pLVar3 = (this->fields).available;
      if ((pLVar3 != (List_1_System_Int32_ *)0x0) &&
         (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveAt
                  (pLVar1,(pLVar3->fields)._size + -1,
                   MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
        pMVar5 = (this->fields).pool;
        if (pMVar5 != (MonoBehaviour__Array *)0x0) {
          if (pMVar5->max_length <= (uint)RVar4) goto code_?;
          if (pMVar5->vector[(int)RVar4] != (MonoBehaviour *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pMVar5->vector[(int)RVar4],(MethodInfo *)0x0);
            if (this_00 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              pMVar5 = (this->fields).pool;
              if (pMVar5 != (MonoBehaviour__Array *)0x0) {
                if ((uint)RVar4 < pMVar5->max_length) {
                  return pMVar5->vector[(int)RVar4];
                }
                goto code_?;
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
  pcVar6 = (code *)swi(3);
  pMVar2 = (MonoBehaviour *)(*pcVar6)();
  return pMVar2;
}


/* Int32 get_ObjectsAvailable() */

int32_t Assembly-CSharp.dll::Pool::Pool_get_ObjectsAvailable(Pool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<int>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).available;
  if (pLVar2 != (List_1_System_Int32_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_Return(MonoBehaviour) */

void Assembly-CSharp.dll::Pool::Pool_set_Return(Pool *this,MonoBehaviour *value,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  pMVar3 = (this->fields).pool;
  if (pMVar3 != (MonoBehaviour__Array *)0x0) {
    this = (Pool *)0x10;
    do {
      if ((int)pMVar3->max_length <= (int)uVar2) {
        if (value != (MonoBehaviour *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)value,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar4,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pMVar3 = (pPVar1->fields).pool;
      if (pMVar3 == (MonoBehaviour__Array *)0x0) break;
      if (pMVar3->max_length <= uVar2) goto code_?;
      x = *(Object_1 **)((int)pMVar3->vector + (int)&this[-1].fields.poolEnum);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)value,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if ((value != (MonoBehaviour *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)value,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)value,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_00,(pPVar1->fields).parent,(MethodInfo *)0x0);
            pLVar6 = (pPVar1->fields).available;
            if (pLVar6 != (List_1_System_Int32_ *)0x0) {
              func_?(pLVar6,uVar2,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      uVar2 = uVar2 + 1;
      pMVar3 = (pPVar1->fields).pool;
      this = (Pool *)&this->monitor;
    } while (pMVar3 != (MonoBehaviour__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

