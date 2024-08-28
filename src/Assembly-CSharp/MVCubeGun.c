
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_OnDataUpdate(MVCubeGun *this,MethodInfo *method)

{
  MVPickupItemBase::MVPickupItemBase_OnDataUpdate((MVPickupItemBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
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
  puVar2 = (undefined4 *)(in_stack_1 + 0x118);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_1 + 0x58)
        == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                        (in_stack_1 + 0x58),(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index == 0) goto code_?;
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)TVar4.m_Index + 0xb8) < bVar5) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar4.m_Index + 100) + -4 + (uint)bVar5 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_01 = (CubeBullet *)*puVar2;
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar4.m_Index,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_01 == (CubeBullet *)0x0) || (TVar4.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar6 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial(this_01,*puVar6,(MethodInfo *)0x0);
      if (*(GameObject **)(in_stack_1 + 0x88) != (GameObject *)0x0) {
        pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (*(GameObject **)(in_stack_1 + 0x88),
                            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                           );
        if (pOVar7 != (Object *)0x0) {
          uStack8 = 0;
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
          pMVar9 = pOVar7[3].monitor;
          if (pMVar9 != (MonitorData *)0x0) {
            length = *(int *)(pMVar9 + 0xc);
            *(int *)(pMVar9 + 0x10) = *(int *)(pMVar9 + 0x10) + 1;
            *(undefined4 *)(pMVar9 + 0xc) = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        (*(Array **)(pMVar9 + 8),0,length,(MethodInfo *)0x0);
            }
            if (pOVar7[2].klass != (Object__Class *)0x0) {
              pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 ((GameObject *)pOVar7[2].klass,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar11 = (char *)0x0;
              if (pOVar10 != (Object__Array *)0x0) {
                ppOVar12 = pOVar10->vector;
                while( true ) {
                  method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
                  if ((int)pOVar10->max_length <= (int)pcVar11) {
                    return;
                  }
                  if ((char *)pOVar10->max_length <= pcVar11) break;
                  this_00 = (Object__Class *)*ppOVar12;
                  value = (Object *)func_?();
                  *(undefined1 *)&value[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  pOVar13 = value + 1;
                  pOVar13->klass = this_00;
                  func_?();
                  if (this_00 == (Object__Class *)0x0) goto code_?;
                  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  value[1].monitor = (MonitorData *)pMVar14;
                  func_?(&value[1].monitor,pMVar14);
                  if ((List_1_System_Object_ *)pOVar7[3].monitor == (List_1_System_Object_ *)0x0)
                  goto code_?;
                  pOVar10 = (Object__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pOVar7[3].monitor,value,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar11 = pcVar11 + 1;
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
      pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (*(GameObject **)(in_stack_1 + 0x88),
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      *puVar2 = pOVar7;
      func_?(puVar2);
      goto code_?;
    }
code_?:
    TVar4.m_Index = func_?();
  }
  func_?(TVar4.m_Index);
  TVar4.m_Index = extraout_EDX;
code_?:
  func_?(TVar4.m_Index);
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
  x = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).cubeBullet;
  ppCVar1 = &(this->fields).cubeBullet;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    this_02 = (Dictionary_2_System_Object_System_Object___Class *)(this->fields)._._._._.data;
    if (this_02 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         (Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    x = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (this_01.m_Index == 0) goto code_?;
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) < bVar3) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar3 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pCVar4 = *ppCVar1;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_01.m_Index,(Object *)StringLiteral_material,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Byte,TVar5.m_Index);
    if ((pCVar4 == (CubeBullet *)0x0) || (TVar5.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar7 = (uint8_t *)func_?();
      x = this_02;
      CubeBullet::CubeBullet_SetCubeMaterial(pCVar4,*puVar7,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._._._.gameObject;
      if (pGVar8 != (GameObject *)0x0) {
        pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_1
                            (pGVar8,
                             GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                            );
        if (pOVar9 != (Object *)0x0) {
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
          pMVar10 = pOVar9[3].monitor;
          if (pMVar10 != (MonitorData *)0x0) {
            length = *(int *)(pMVar10 + 0xc);
            *(int *)(pMVar10 + 0x10) = *(int *)(pMVar10 + 0x10) + 1;
            *(undefined4 *)(pMVar10 + 0xc) = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        (*(Array **)(pMVar10 + 8),0,length,(MethodInfo *)0x0);
            }
            if (pOVar9[2].klass != (Object__Class *)0x0) {
              pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 ((GameObject *)pOVar9[2].klass,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar12 = (char *)0x0;
              if (pOVar11 != (Object__Array *)0x0) {
                ppOVar13 = pOVar11->vector;
                while( true ) {
                  if ((int)pOVar11->max_length <= (int)pcVar12) {
                    return;
                  }
                  if ((char *)pOVar11->max_length <= pcVar12) break;
                  this_00 = (Object__Class *)*ppOVar13;
                  method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
                  value = (Object *)func_?();
                  *(undefined1 *)&value[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  pOVar14 = value + 1;
                  pOVar14->klass = this_00;
                  this_01.m_Index = (int32_t)this_00;
                  func_?(pOVar14,this_00);
                  if (this_00 == (Object__Class *)0x0) goto code_?;
                  pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  value[1].monitor = (MonitorData *)pMVar15;
                  func_?(&value[1].monitor,pMVar15);
                  if ((List_1_System_Object_ *)pOVar9[3].monitor == (List_1_System_Object_ *)0x0)
                  goto code_?;
                  pOVar11 = (Object__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pOVar9[3].monitor,value,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar12 = pcVar12 + 1;
                  ppOVar13 = (Object **)&pOVar14->monitor;
                }
                func_?();
              }
            }
          }
code_?:
          func_?();
          pcVar16 = (code *)swi(3);
          (*pcVar16)(this_01.m_Index);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    pGVar8 = (this->fields)._._._.gameObject;
    if (pGVar8 != (GameObject *)0x0) {
      pCVar4 = (CubeBullet *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (pGVar8,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      *ppCVar1 = pCVar4;
      func_?(ppCVar1,pCVar4);
      goto code_?;
    }
code_?:
    uVar6 = func_?();
  }
  func_?(uVar6);
  this_01.m_Index = extraout_EDX;
code_?:
  func_?(this_01.m_Index,x);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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

