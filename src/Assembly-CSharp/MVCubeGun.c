
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_OnDataUpdate(MVCubeGun *this,MethodInfo *method)

{
  MVPickupItemBase::MVPickupItemBase_OnDataUpdate((MVPickupItemBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_material);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_1 + 0x118);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_1 + 0x58)
        == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                        (in_stack_1 + 0x58),(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) goto code_?;
    if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_01 = *(CubeBullet **)(in_stack_1 + 0x118);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar3.m_Index,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_01 == (CubeBullet *)0x0) || (TVar3.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar4 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial(this_01,*puVar4,(MethodInfo *)0x0);
      if (*(GameObject **)(in_stack_1 + 0x88) != (GameObject *)0x0) {
        pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (*(GameObject **)(in_stack_1 + 0x88),
                            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                           );
        if (pOVar5 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                           );
            func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            cRam_? = '\x01';
          }
          pLVar6 = pLRam00000018;
          if (pLRam00000018 != (List_1_System_Object_ *)0x0) {
            length = (pLRam00000018->fields)._size;
            piVar7 = &(pLRam00000018->fields)._version;
            *piVar7 = *piVar7 + 1;
            (pLVar6->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar6->fields)._items,0,length,(MethodInfo *)0x0);
            }
            if (pGRam00000010 != (GameObject *)0x0) {
              pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 (pGRam00000010,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar9 = (char *)0x0;
              if (pOVar8 != (Object__Array *)0x0) {
                ppOVar10 = pOVar8->vector;
                while( true ) {
                  method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
                  if ((int)pOVar8->max_length <= (int)pcVar9) {
                    return;
                  }
                  if ((char *)pOVar8->max_length <= pcVar9) break;
                  this_00 = (Object__Class *)*ppOVar10;
                  pOVar5 = (Object *)func_?();
                  *(undefined1 *)&pOVar5[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            (pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  pOVar5[1].klass = this_00;
                  func_?();
                  if (this_00 == (Object__Class *)0x0) goto code_?;
                  pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  pOVar5[1].monitor = (MonitorData *)pMVar11;
                  func_?(&pOVar5[1].monitor);
                  if (pLRam00000018 == (List_1_System_Object_ *)0x0) goto code_?;
                  pOVar8 = (Object__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            (pLRam00000018,pOVar5,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar9 = pcVar9 + 1;
                  ppOVar10 = (Object **)&pOVar5[1].monitor;
                }
                func_?();
              }
            }
          }
code_?:
          func_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(GameObject **)(in_stack_1 + 0x88) != (GameObject *)0x0) {
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (*(GameObject **)(in_stack_1 + 0x88),
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      *(Object **)(in_stack_1 + 0x118) = pOVar5;
      func_?();
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetCubeMaterial() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_SetCubeMaterial(MVCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_material);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  this_02.m_Index = (int32_t)(this->fields).cubeBullet;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_02.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._._._._.data;
    if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    pCVar2 = (CubeBullet *)&UNK_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this_02 = TVar3;
    if (TVar3.m_Index == 0) goto code_?;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_02.m_Index = (int32_t)(this->fields).cubeBullet;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar3.m_Index,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar5 = CONCAT44(TypeInfo__System__Byte,TVar3.m_Index);
    if (((CubeBullet *)this_02.m_Index == (CubeBullet *)0x0) || (TVar3.m_Index == 0))
    goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar6 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial
                ((CubeBullet *)this_02.m_Index,*puVar6,(MethodInfo *)0x0);
      this_02.m_Index = (int32_t)pCVar2;
      pGVar7 = (this->fields)._._._.gameObject;
      if (pGVar7 != (GameObject *)0x0) {
        pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_1
                            (pGVar7,
                             GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                            );
        if (pOVar8 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                           );
            func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            cRam_? = '\x01';
          }
          pLVar9 = pLRam00000018;
          if (pLRam00000018 != (List_1_System_Object_ *)0x0) {
            length = (pLRam00000018->fields)._size;
            piVar10 = &(pLRam00000018->fields)._version;
            *piVar10 = *piVar10 + 1;
            (pLVar9->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar9->fields)._items,0,length,(MethodInfo *)0x0);
            }
            if (pGRam00000010 != (GameObject *)0x0) {
              pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 (pGRam00000010,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar12 = (char *)0x0;
              if (pOVar11 != (Object__Array *)0x0) {
                ppOVar13 = pOVar11->vector;
                while( true ) {
                  method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
                  if ((int)pOVar11->max_length <= (int)pcVar12) {
                    return;
                  }
                  if ((char *)pOVar11->max_length <= pcVar12) break;
                  this_00 = (Object__Class *)*ppOVar13;
                  value = (Object *)func_?();
                  *(undefined1 *)&value[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  pOVar8 = value + 1;
                  value[1].klass = this_00;
                  func_?();
                  if (this_00 == (Object__Class *)0x0) goto code_?;
                  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  value[1].monitor = (MonitorData *)pMVar14;
                  func_?(&value[1].monitor,pMVar14);
                  if (pLRam00000018 == (List_1_System_Object_ *)0x0) goto code_?;
                  pOVar11 = (Object__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            (pLRam00000018,value,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar12 = pcVar12 + 1;
                  ppOVar13 = (Object **)&pOVar8->monitor;
                }
                func_?();
              }
            }
          }
code_?:
          func_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    pGVar7 = (this->fields)._._._.gameObject;
    if (pGVar7 != (GameObject *)0x0) {
      pCVar2 = (CubeBullet *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (pGVar7,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      (this->fields).cubeBullet = pCVar2;
      func_?(&(this->fields).cubeBullet,pCVar2);
      goto code_?;
    }
code_?:
    uVar5 = func_?();
  }
  func_?(uVar5);
  pDVar4 = extraout_EDX;
code_?:
  func_?(this_02.m_Index,pDVar4);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVCubeGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun__ctor
               (MVCubeGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPickupItemBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPickupItemBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPickupItemBase);
  }
  MVPickupItemBase::MVPickupItemBase__ctor
            ((MVPickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  MVCubeGun_SetCubeMaterial(this,(MethodInfo *)0x0);
  return;
}

