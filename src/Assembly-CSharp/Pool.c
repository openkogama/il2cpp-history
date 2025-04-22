
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
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,capacity,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  (this->fields).available = (List_1_System_Int32_ *)this_01;
  func_?(&(this->fields).available,this_01);
  item = 0;
  if (0 < (this->fields).poolSize) {
    this = (Pool *)0x10;
    do {
      original = (pPVar1->fields).prefab;
      pMVar2 = (pPVar1->fields).pool;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
      if (pMVar2 == (MonoBehaviour__Array *)0x0) goto code_?;
      if ((pOVar3 != (Object *)0x0) &&
         (iVar4 = func_?(pOVar3,(pMVar2->klass->_0).element_class), iVar4 == 0)) {
code_?:
        uVar5 = func_?(0);
        func_?(uVar5);
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pMVar2->max_length <= item) goto code_?;
      *(Object **)((int)pMVar2->vector + (int)&this[-1].fields.poolEnum) = pOVar3;
      func_?((int)pMVar2->vector + (int)&this[-1].fields.poolEnum,pOVar3);
      pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      this_00 = (pPVar1->fields).available;
      if (this_00 == (List_1_System_Int32_ *)0x0) {
code_?:
        func_?();
        goto code_?;
      }
      piVar8 = &(this_00->fields)._version;
      *piVar8 = *piVar8 + 1;
      pIVar9 = (this_00->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      uVar10 = (this_00->fields)._size;
      if (uVar10 < pIVar9->max_length) {
        (this_00->fields)._size = uVar10 + 1;
        if (pIVar9->max_length <= uVar10) goto code_?;
        pIVar9->vector[uVar10] = item;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize(this_00,item,pMVar7->klass->rgctx_data[0xe].method);
      }
      pMVar2 = (pPVar1->fields).pool;
      if (pMVar2 == (MonoBehaviour__Array *)0x0) goto code_?;
      if (pMVar2->max_length <= item) goto code_?;
      pCVar11 = *(Component **)((int)pMVar2->vector + (int)&this[-1].fields.poolEnum);
      if ((pCVar11 == (Component *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (pCVar11,(MethodInfo *)0x0), this_02 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pMVar2 = (pPVar1->fields).pool;
      if (pMVar2 == (MonoBehaviour__Array *)0x0) goto code_?;
      if (pMVar2->max_length <= item) goto code_?;
      pCVar11 = *(Component **)((int)pMVar2->vector + (int)&this[-1].fields.poolEnum);
      if ((pCVar11 == (Component *)0x0) ||
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar11,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (this_03,(Transform *)&UNK_?,(MethodInfo *)0x0);
      item = item + 1;
      this = (Pool *)&this->monitor;
    } while ((int)item < (pPVar1->fields).poolSize);
  }
  return;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::Pool::Pool_Instantiate(Pool *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  pMVar1 = Pool_get_Next(this,(MethodInfo *)0x0);
  pIVar2 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  iVar4 = func_?(pMVar1,pIVar3);
  if (iVar4 == 0) {
    return (Object *)0x0;
  }
  pOVar5 = (Object *)func_?(iVar4,pIVar2);
  if (pOVar5 != (Object *)0x0) {
    return pOVar5;
  }
  func_?(iVar4,pIVar2);
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).available;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size < 1) {
      pMVar1 = (this->fields).prefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pMVar1 = (MonoBehaviour *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pMVar1,
                          UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields).available;
    if ((pLVar2 != (List_1_System_Int32_ *)0x0) &&
       (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(pLVar2->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      this_01 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
                (this->fields).available;
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
        cRam_? = '\x01';
      }
      pLVar2 = (this->fields).available;
      if ((pLVar2 != (List_1_System_Int32_ *)0x0) &&
         (this_01 !=
          (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
        Implementation::UIRStylePainter+RepeatRectUV]::
        List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                  (this_01,(pLVar2->fields)._size + -1,
                   MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
        pMVar4 = (this->fields).pool;
        if (pMVar4 != (MonoBehaviour__Array *)0x0) {
          if (pMVar4->max_length <= (uint)RVar3) goto code_?;
          if (pMVar4->vector[(int)RVar3] != (MonoBehaviour *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pMVar4->vector[(int)RVar3],(MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_02,1,(MethodInfo *)0x0);
              pMVar4 = (this->fields).pool;
              if (pMVar4 != (MonoBehaviour__Array *)0x0) {
                if ((uint)RVar3 < pMVar4->max_length) {
                  return pMVar4->vector[(int)RVar3];
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
  pcVar5 = (code *)swi(3);
  pMVar1 = (MonoBehaviour *)(*pcVar5)();
  return pMVar1;
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

