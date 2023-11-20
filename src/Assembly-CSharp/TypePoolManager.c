
/* Void Awake() */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Awake
               (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
                   );
    func_?(&TypeInfo__System__Func<Pool,_System::Type>);
    func_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_);
    func_?(&MethodInfo__TypePoolManager____c___Awake_b__2_0_Pool_);
    func_?(&TypeInfo__TypePoolManager____c);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).pool;
  while (pLVar1 != (List_1_Pool_ *)0x0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).pool;
    if ((pLVar1->fields)._size <= index) {
      if ((TypeInfo__TypePoolManager____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TypePoolManager____c);
      }
      this_02 = TypeInfo__TypePoolManager____c->static_fields->__9__2_0;
      if (this_02 == (Func_2_Pool_Type_ *)0x0) {
        if ((TypeInfo__TypePoolManager____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TypePoolManager____c);
        }
        object = TypeInfo__TypePoolManager____c->static_fields->__9;
        this_02 = (Func_2_Pool_Type_ *)func_?(TypeInfo__System__Func<Pool,_System::Type>);
        mscorlib.dll::System::Func`2[Object,UInt32]::Func_2_Object_UInt32___ctor
                  ((Func_2_Object_UInt32_ *)this_02,(Object *)object,
                   MethodInfo__TypePoolManager____c___Awake_b__2_0_Pool_,(MethodInfo *)0x0);
        TypeInfo__TypePoolManager____c->static_fields->__9__2_0 = this_02;
        func_?(&TypeInfo__TypePoolManager____c->static_fields->__9__2_0,this_02);
      }
      pDVar2 = (Dictionary_2_System_Type_Pool_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_1
                         ((IEnumerable_1_System_Object_ *)this_00,(Func_2_Object_Object_ *)this_02,
                          System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
                         );
      (this->fields).poolAsDictionary = pDVar2;
      func_?(&(this->fields).poolAsDictionary,pDVar2);
      return;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_01 == (RegexCharClass_SingleRange)0x0) break;
    Pool::Pool_Initialize((Pool *)this_01,parent,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).pool;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Pool GetPool[Object]() */

Pool * Assembly-CSharp.dll::TypePoolManager::TypePoolManager_GetPool
                 (TypePoolManager *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                   );
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).poolAsDictionary;
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  key = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                  ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                      );
    return (Pool *)TVar1.m_Index;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Pool *)(*pcVar2)();
  return pPVar3;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Instantiate
                   (TypePoolManager *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                   );
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).poolAsDictionary;
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  key = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                  ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                        );
    if (this_01.m_Index != 0) {
      pOVar1 = Pool::Pool_Instantiate
                         ((Pool *)this_01.m_Index,(method->field7_0x1c).rgctx_data[1].method);
      return pOVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Void Return[Object](Object) */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Return
               (TypePoolManager *this,Object *obj,MethodInfo *method)

{
  iVar1 = in_stack_2;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                   );
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).poolAsDictionary;
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  key = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                  ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                        ), TVar3.m_Index == 0)) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uVar5 = 0;
  iVar6 = *(int *)(in_stack_2 + 0x1c);
  if (iVar6 != 0) {
    in_stack_2 = 0x10;
    do {
      if (*(int *)(iVar6 + 0xc) <= (int)uVar5) {
        if (in_stack_7 != (Component *)0x0) {
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (in_stack_7,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      iVar6 = *(int *)(iVar1 + 0x1c);
      if (iVar6 == 0) break;
      if (*(uint *)(iVar6 + 0xc) <= uVar5) goto code_?;
      x = *(Object_1 **)(in_stack_2 + iVar6);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)in_stack_7,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        if ((in_stack_7 != (Component *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (in_stack_7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,0,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (in_stack_7,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,*(Transform **)(iVar1 + 0x14),(MethodInfo *)0x0);
            if (*(int *)(iVar1 + 0x18) != 0) {
              func_?(*(int *)(iVar1 + 0x18),uVar5,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
      iVar6 = *(int *)(iVar1 + 0x1c);
      in_stack_2 = in_stack_2 + 4;
    } while (iVar6 != 0);
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Update
               (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&Pool_MethodInfo__TypePoolManager__GetPool<Bullet>__);
    func_?(&StringLiteral_Noooo_);
    func_?(&StringLiteral_YEAH_);
    func_?(&StringLiteral_Intended);
    func_?(&StringLiteral_What_);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                    (KeyCode__Enum_A,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pPVar2 = TypePoolManager_GetPool(this,Pool_MethodInfo__TypePoolManager__GetPool<Bullet>__);
    if (pPVar2 == (Pool *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (TypePoolManager *)StringLiteral_Noooo_;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Noooo_,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (TypePoolManager *)StringLiteral_YEAH_;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_YEAH_,(MethodInfo *)0x0);
    }
  }
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                    (KeyCode__Enum_B,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pPVar2 = TypePoolManager_GetPool(this,Pool_MethodInfo__TypePoolManager__GetPool<Bullet>__);
    if (pPVar2 != (Pool *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_What_,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Intended,(MethodInfo *)0x0);
  }
  return;
}

