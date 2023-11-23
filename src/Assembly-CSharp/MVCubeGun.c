
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
  this_01.m_Index = *(undefined4 *)(in_stack_1 + 0x118);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar2 = (Object_1 *)0x0;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_01.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_1 + 0x58)
        == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                          (in_stack_1 + 0x58),(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this_01.m_Index == 0) goto code_?;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_00 = *(CubeBullet **)(in_stack_1 + 0x118);
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_00 == (CubeBullet *)0x0) || (TVar4.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar5 = (uint8_t *)func_?();
      this_01.m_Index = (int32_t)pOVar2;
      CubeBullet::CubeBullet_SetCubeMaterial(this_00,*puVar5,(MethodInfo *)0x0);
      if (*(GameObject **)(in_stack_1 + 0x88) != (GameObject *)0x0) {
        pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (*(GameObject **)(in_stack_1 + 0x88),
                            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                           );
        if (pOVar6 != (Object *)0x0) {
          uStack7 = 0;
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
          pOVar8 = pOVar6[3].klass;
          if (pOVar8 != (Object__Class *)0x0) {
            pcVar9 = (pOVar8->_0).namespaze;
            pIVar10 = &(pOVar8->_0).byval_arg;
            (pIVar10->data).dummy = (void *)((int)&((pIVar10->data).type)->data + 1);
            (pOVar8->_0).namespaze = (char *)0x0;
            if (0 < (int)pcVar9) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pOVar8->_0).name,0,(int32_t)pcVar9,(MethodInfo *)0x0);
            }
            if (pOVar6[2].klass != (Object__Class *)0x0) {
              pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 ((GameObject *)pOVar6[2].klass,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar9 = (char *)0x0;
              if (pOVar11 != (Object__Array *)0x0) {
                ppOVar12 = pOVar11->vector;
                while( true ) {
                  method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
                  if ((int)pOVar11->max_length <= (int)pcVar9) {
                    return;
                  }
                  if ((char *)pOVar11->max_length <= pcVar9) break;
                  pOVar8 = (Object__Class *)*ppOVar12;
                  value = (Object *)func_?();
                  *(undefined1 *)&value[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  pOVar13 = value + 1;
                  value[1].klass = pOVar8;
                  func_?();
                  if (pOVar8 == (Object__Class *)0x0) goto code_?;
                  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)pOVar8,(MethodInfo *)0x0);
                  value[1].monitor = (MonitorData *)pMVar14;
                  func_?(&value[1].monitor,pMVar14);
                  if (pOVar6[3].klass == (Object__Class *)0x0) goto code_?;
                  pOVar11 = (Object__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pOVar6[3].klass,value,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar9 = pcVar9 + 1;
                  ppOVar12 = (Object **)&pOVar13->monitor;
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
    if (*(GameObject **)(in_stack_1 + 0x88) != (GameObject *)0x0) {
      pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (*(GameObject **)(in_stack_1 + 0x88),
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      *(Object **)(in_stack_1 + 0x118) = pOVar6;
      func_?(in_stack_1 + 0x118);
      goto code_?;
    }
code_?:
    TVar4.m_Index = func_?();
  }
  func_?(TVar4.m_Index);
code_?:
  func_?(this_01.m_Index);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  this_01.m_Index = (int32_t)(this->fields).cubeBullet;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (CubeBullet *)0x0;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_01.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._._._._.data;
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this_01.m_Index == 0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pCVar4 = (this->fields).cubeBullet;
    TVar5 = this_01;
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Byte,TVar6.m_Index);
    if ((pCVar4 == (CubeBullet *)0x0) || (TVar6.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar8 = (uint8_t *)func_?();
      this_01.m_Index = (int32_t)pCVar1;
      CubeBullet::CubeBullet_SetCubeMaterial(pCVar4,*puVar8,(MethodInfo *)0x0);
      pGVar9 = (this->fields)._._._.gameObject;
      if (pGVar9 != (GameObject *)0x0) {
        pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_1
                            (pGVar9,
                             GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                            );
        if (pOVar10 != (Object *)0x0) {
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
          pOVar11 = pOVar10[3].klass;
          if (pOVar11 != (Object__Class *)0x0) {
            pcVar12 = (pOVar11->_0).namespaze;
            pIVar13 = &(pOVar11->_0).byval_arg;
            (pIVar13->data).dummy = (void *)((int)&((pIVar13->data).type)->data + 1);
            (pOVar11->_0).namespaze = (char *)0x0;
            if (0 < (int)pcVar12) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pOVar11->_0).name,0,(int32_t)pcVar12,(MethodInfo *)0x0);
            }
            if (pOVar10[2].klass != (Object__Class *)0x0) {
              pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 ((GameObject *)pOVar10[2].klass,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar12 = (char *)0x0;
              if (pOVar14 != (Object__Array *)0x0) {
                ppOVar15 = pOVar14->vector;
                while( true ) {
                  if ((int)pOVar14->max_length <= (int)pcVar12) {
                    return;
                  }
                  if ((char *)pOVar14->max_length <= pcVar12) break;
                  pOVar11 = (Object__Class *)*ppOVar15;
                  method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
                  value = (Object *)func_?();
                  *(undefined1 *)&value[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  pOVar16 = value + 1;
                  value[1].klass = pOVar11;
                  TVar5.m_Index = (int32_t)pOVar11;
                  func_?(pOVar16,pOVar11);
                  if (pOVar11 == (Object__Class *)0x0) goto code_?;
                  pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)pOVar11,(MethodInfo *)0x0);
                  value[1].monitor = (MonitorData *)pMVar17;
                  func_?(&value[1].monitor,pMVar17);
                  if (pOVar10[3].klass == (Object__Class *)0x0) goto code_?;
                  pOVar14 = (Object__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pOVar10[3].klass,value,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar12 = pcVar12 + 1;
                  ppOVar15 = (Object **)&pOVar16->monitor;
                }
                func_?();
              }
            }
          }
code_?:
          func_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)(TVar5.m_Index);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    pGVar9 = (this->fields)._._._.gameObject;
    if (pGVar9 != (GameObject *)0x0) {
      pCVar4 = (CubeBullet *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (pGVar9,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      (this->fields).cubeBullet = pCVar4;
      func_?(&(this->fields).cubeBullet,pCVar4);
      goto code_?;
    }
code_?:
    uVar7 = func_?();
  }
  func_?(uVar7);
  pDVar3 = extraout_EDX;
code_?:
  func_?(this_01.m_Index,pDVar3);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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

