
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_OnDataUpdate(MVCubeGun *this,MethodInfo *method)

{
  MVPickupItemBase::MVPickupItemBase_OnDataUpdate((MVPickupItemBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = (in_stack_2->fields).timeAttackFlagPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    pDVar4 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_2,(MethodInfo *)0x0);
    if (pDVar4 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar4,(Type *)StringLiteral_itemData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pDVar4 = pDVar5;
    if (pDVar5 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar5->klass->_1).naturalAligment < bVar6) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pDVar4 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar7) {
        pDVar4 = pDVar5;
      }
      if (pDVar4 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pOVar1 = (in_stack_2->fields).timeAttackFlagPrefab;
    if (pDVar4 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (pDVar4,(Type *)StringLiteral_material,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((pOVar1 == (ObjectPrefab *)0x0) || (pPVar8 == (Pool *)0x0)) goto code_?;
    if ((pPVar8->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar9 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial((CubeBullet *)pOVar1,*puVar9,(MethodInfo *)0x0);
      pOVar1 = (in_stack_2->fields).mvGravityCubePrefab;
      if (pOVar1 != (ObjectPrefab *)0x0) {
        pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)pOVar1,
                            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                           );
        if (pUVar10 != (UseInteratorVisualization__Array *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (*(List_1_UnityEngine_UIVertex_ **)(in_stack_11 + 0x14) !=
              (List_1_UnityEngine_UIVertex_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
            List_1_UnityEngine_UIVertex__Clear
                      (*(List_1_UnityEngine_UIVertex_ **)(in_stack_11 + 0x14),
                       MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                      );
            if (*(GameObject **)(in_stack_11 + 0xc) != (GameObject *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren_29
                                 (*(GameObject **)(in_stack_11 + 0xc),
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar12 = (char *)0x0;
              if (pUVar10 != (UseInteratorVisualization__Array *)0x0) {
                ppUVar13 = pUVar10->vector;
                while( true ) {
                  if ((int)pUVar10->max_length <= (int)pcVar12) {
                    return;
                  }
                  if ((char *)pUVar10->max_length <= pcVar12) break;
                  this_00 = *ppUVar13;
                  this_01 = (ScaleAnimationBase *)func_?();
                  *(undefined1 *)&(this_01->fields).originalScale.x = 1;
                  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
                  (this_01->fields)._._._._.m_CachedPtr = this_00;
                  if (this_00 == (UseInteratorVisualization *)0x0) goto code_?;
                  method_00 = (MethodInfo *)&UNK_?;
                  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  (this_01->fields).state = (int32_t)pMVar14;
                  pUVar10 = (UseInteratorVisualization__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  if (*(List_1_UIPushOption_ **)(in_stack_11 + 0x14) ==
                      (List_1_UIPushOption_ *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            (*(List_1_UIPushOption_ **)(in_stack_11 + 0x14),
                             (UIPushOption__Enum)this_01,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar12 = pcVar12 + 1;
                  ppUVar13 = ppUVar13 + 1;
                }
                func_?();
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
    pOVar1 = (in_stack_2->fields).mvGravityCubePrefab;
    if (pOVar1 != (ObjectPrefab *)0x0) {
      pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)pOVar1,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      (in_stack_2->fields).timeAttackFlagPrefab = (ObjectPrefab *)pUVar10;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetCubeMaterial() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_SetCubeMaterial(MVCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeBullet;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pDVar4 = (Dictionary_2_System_Type_Pool_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (pDVar3,(Type *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pDVar3 = pDVar4;
    if (pDVar4 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar4->klass->_1).naturalAligment < bVar5) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pDVar3 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar6) {
        pDVar3 = pDVar4;
      }
      if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pCVar1 = (this->fields).cubeBullet;
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (pDVar3,(Type *)StringLiteral_material,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((pCVar1 == (CubeBullet *)0x0) || (pPVar7 == (Pool *)0x0)) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar8 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial(pCVar1,*puVar8,(MethodInfo *)0x0);
      pGVar9 = (this->fields)._._._.gameObject;
      if (pGVar9 != (GameObject *)0x0) {
        pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (pGVar9,
                            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                           );
        if (pUVar10 != (UseInteratorVisualization__Array *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (*(List_1_UnityEngine_UIVertex_ **)(in_stack_11 + 0x14) !=
              (List_1_UnityEngine_UIVertex_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
            List_1_UnityEngine_UIVertex__Clear
                      (*(List_1_UnityEngine_UIVertex_ **)(in_stack_11 + 0x14),
                       MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                      );
            if (*(GameObject **)(in_stack_11 + 0xc) != (GameObject *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren_29
                                 (*(GameObject **)(in_stack_11 + 0xc),
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar12 = (char *)0x0;
              if (pUVar10 != (UseInteratorVisualization__Array *)0x0) {
                ppUVar13 = pUVar10->vector;
                while( true ) {
                  if ((int)pUVar10->max_length <= (int)pcVar12) {
                    return;
                  }
                  if ((char *)pUVar10->max_length <= pcVar12) break;
                  this_00 = *ppUVar13;
                  this_01 = (ScaleAnimationBase *)func_?();
                  *(undefined1 *)&(this_01->fields).originalScale.x = 1;
                  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
                  (this_01->fields)._._._._.m_CachedPtr = this_00;
                  if (this_00 == (UseInteratorVisualization *)0x0) goto code_?;
                  method_00 = (MethodInfo *)&UNK_?;
                  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  (this_01->fields).state = (int32_t)pMVar14;
                  pUVar10 = (UseInteratorVisualization__Array *)
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  if (*(List_1_UIPushOption_ **)(in_stack_11 + 0x14) ==
                      (List_1_UIPushOption_ *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            (*(List_1_UIPushOption_ **)(in_stack_11 + 0x14),
                             (UIPushOption__Enum)this_01,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar12 = pcVar12 + 1;
                  ppUVar13 = ppUVar13 + 1;
                }
                func_?();
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
    pGVar9 = (this->fields)._._._.gameObject;
    if (pGVar9 != (GameObject *)0x0) {
      pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (pGVar9,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      (this->fields).cubeBullet = (CubeBullet *)pUVar10;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPickupItemBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPickupItemBase->_1).cctor_started == 0)) {
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

