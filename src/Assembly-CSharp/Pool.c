
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::Pool::Pool_Initialize(Pool *this,Transform *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).parent = parent;
  pMVar1 = (MonoBehaviour__Array *)
           func_?(TypeInfo__UnityEngine__MonoBehaviour,(this->fields).poolSize);
  capacity = (this->fields).poolSize;
  (this->fields).pool = pMVar1;
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (this_01,capacity,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  item = UIPushOption__Enum_None;
  (this->fields).available = this_01;
  if (0 < (this->fields).poolSize) {
    do {
      original = (XpBoostParticlePreviewer *)(this->fields).prefab;
      pMVar1 = (this->fields).pool;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                (original,
                 UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                );
      if (pMVar1 == (MonoBehaviour__Array *)0x0) {
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      func_?(pMVar1);
      func_?(item);
      this_00 = (List_1_UIPushOption_ *)(this->fields).available;
      if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (this_00,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      if ((this->fields).pool == (MonoBehaviour__Array *)0x0) goto code_?;
      pCVar3 = (Component_1 *)func_?();
      if (pCVar3 == (Component_1 *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          (pCVar3,(MethodInfo *)0x0);
      if (this_02 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      if ((this->fields).pool == (MonoBehaviour__Array *)0x0) goto code_?;
      pCVar3 = (Component_1 *)func_?();
      if (pCVar3 == (Component_1 *)0x0) goto code_?;
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          (pCVar3,(MethodInfo *)0x0);
      if (this_03 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (this_03,(Transform *)0x0,(MethodInfo *)0x0);
      item = item + UIPushOption__Enum_Blocking;
    } while ((int)item < (this->fields).poolSize);
  }
  return;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::Pool::Pool_Instantiate(Pool *this,MethodInfo *method)

{
  if (this == (Pool *)0x0) {
    func_?(0);
  }
  else {
    pMVar1 = Pool_get_Next(this,(MethodInfo *)0x0);
    unaff_EDI = *method->parameters;
    pIVar2 = unaff_EDI;
    if ((unaff_EDI[0x17].type & 1) == 0) {
      func_?(unaff_EDI);
      pIVar2 = *method->parameters;
    }
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
    }
    unaff_ESI = func_?(pMVar1,pIVar2);
    if (unaff_ESI == 0) {
      return (Object *)0x0;
    }
    pOVar3 = (Object *)func_?(unaff_ESI,unaff_EDI);
    if (pOVar3 != (Object *)0x0) {
      return pOVar3;
    }
  }
  func_?(unaff_ESI,unaff_EDI);
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* Void ReturnObject(MonoBehaviour) */

void Assembly-CSharp.dll::Pool::Pool_ReturnObject(Pool *this,MonoBehaviour *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  item = UIPushOption__Enum_None;
  pMVar1 = (this->fields).pool;
  if (pMVar1 != (MonoBehaviour__Array *)0x0) {
    iStack_2 = 0x10;
    do {
      if ((int)pMVar1->max_length <= (int)item) {
        if (obj != (MonoBehaviour *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)obj,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar3,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (pMVar1 == (MonoBehaviour__Array *)0x0) break;
      if (pMVar1->max_length <= item) goto code_?;
      x = *(Object_1 **)((int)pMVar1->vector + iStack_2 + -0x10);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)obj,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((obj != (MonoBehaviour *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)obj,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)obj,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,(this->fields).parent,(MethodInfo *)0x0);
            this_00 = (List_1_UIPushOption_ *)(this->fields).available;
            if (this_00 != (List_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (this_00,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
              ;
              return;
            }
          }
        }
        break;
      }
      item = item + UIPushOption__Enum_Blocking;
      iStack_2 = iStack_2 + 4;
      pMVar1 = (this->fields).pool;
    } while (pMVar1 != (MonoBehaviour__Array *)0x0);
  }
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MonoBehaviour get_Next() */

MonoBehaviour * Assembly-CSharp.dll::Pool::Pool_get_Next(Pool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).available;
  if (pLVar1 == (List_1_System_Int32_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    if ((int)pOVar2 < 1) {
      pXVar3 = (XpBoostParticlePreviewer *)(this->fields).prefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar3,
                          UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
      return (MonoBehaviour *)pXVar3;
    }
    pLVar1 = (this->fields).available;
    pLVar4 = pLVar1;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      pLVar4 = (this->fields).available;
      cRam_? = '\x01';
    }
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
    uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__get_Item
                      (pLVar1,(int32_t)((int)&pOVar2[-1].monitor + 3),
                       MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    pLVar1 = (this->fields).available;
    pLVar4 = pLVar1;
    if (cRam_? == '\0') {
      func_?();
      pLVar4 = (this->fields).available;
      cRam_? = '\x01';
    }
    if (pLVar4 == (List_1_System_Int32_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__RemoveAt
              (pLVar1,(int32_t)((int)&pOVar2[-1].monitor + 3),
               MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    pMVar6 = (this->fields).pool;
    if (pMVar6 == (MonoBehaviour__Array *)0x0) goto code_?;
    if (uVar5 < pMVar6->max_length) {
      if (pMVar6->vector[uVar5] != (MonoBehaviour *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pMVar6->vector[uVar5],(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,1,(MethodInfo *)0x0);
          pMVar6 = (this->fields).pool;
          if (pMVar6 != (MonoBehaviour__Array *)0x0) {
            if (uVar5 < pMVar6->max_length) {
              return pMVar6->vector[uVar5];
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
  uVar7 = func_?(0,0);
  func_?(uVar7);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pMVar9 = (MonoBehaviour *)(*pcVar8)();
  return pMVar9;
}


/* Int32 get_ObjectsAvailable() */

int32_t Assembly-CSharp.dll::Pool::Pool_get_ObjectsAvailable(Pool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).available;
  if (this_00 != (List_1_System_Int32_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Return(MonoBehaviour) */

void Assembly-CSharp.dll::Pool::Pool_set_Return(Pool *this,MonoBehaviour *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  item = UIPushOption__Enum_None;
  pMVar1 = (this->fields).pool;
  if (pMVar1 != (MonoBehaviour__Array *)0x0) {
    iStack_2 = 0x10;
    do {
      if ((int)pMVar1->max_length <= (int)item) {
        if (value != (MonoBehaviour *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)value,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar3,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (pMVar1 == (MonoBehaviour__Array *)0x0) break;
      if (pMVar1->max_length <= item) goto code_?;
      x = *(Object_1 **)((int)pMVar1->vector + iStack_2 + -0x10);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)value,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((value != (MonoBehaviour *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)value,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)value,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,(this->fields).parent,(MethodInfo *)0x0);
            this_00 = (List_1_UIPushOption_ *)(this->fields).available;
            if (this_00 != (List_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (this_00,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
              ;
              return;
            }
          }
        }
        break;
      }
      item = item + UIPushOption__Enum_Blocking;
      iStack_2 = iStack_2 + 4;
      pMVar1 = (this->fields).pool;
    } while (pMVar1 != (MonoBehaviour__Array *)0x0);
  }
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

