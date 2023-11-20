
/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_CompareWithKoGaMaPackage
               (MVSentryGunBlueprint *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__MVSentryGunBlueprint);
    func_?(&TypeInfo__MVSentryGun);
    func_?(&StringLiteral_editableCubeModel);
    func_?(&StringLiteral_sentryGun);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pMVar1 = extraout_EDX;
code_?:
    func_?(pMVar1);
    pMVar1 = extraout_EDX_00;
  }
  else {
    pMVar1 = (MVCubeModelInstance__Class *)TypeInfo__MVSentryGunBlueprint;
    if (((TypeInfo__MVSentryGunBlueprint->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
       ((MVSentryGunBlueprint__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVSentryGunBlueprint->_1).naturalAligment - 1] ==
        TypeInfo__MVSentryGunBlueprint)) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(wo->fields)._.data;
      if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (wo = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (this_00,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), wo == (MVWorldObjectClient *)0x0)) goto code_?;
      pMVar1 = (MVCubeModelInstance__Class *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)wo + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)wo + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)wo,
                      (Object *)StringLiteral_ChildrenMap,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      if (wo == (MVWorldObjectClient *)0x0) goto code_?;
      pMVar1 = (MVCubeModelInstance__Class *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)wo + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)wo + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)wo,
                         (Object *)StringLiteral_editableCubeModel,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar4 = (int32_t *)func_?();
      pMVar1 = (MVCubeModelInstance__Class *)*piVar4;
      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)wo,
                         (Object *)StringLiteral_sentryGun,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
      wo = (MVWorldObjectClient *)pMVar1;
      if (TVar5.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar4 = (int32_t *)func_?(TVar5.m_Index);
      key = *piVar4;
      if ((TVar2.m_Index == 0) ||
         (*(Dictionary_2_System_Int32_System_Object_ **)(TVar2.m_Index + 0xc) ==
          (Dictionary_2_System_Int32_System_Object_ *)0x0)) goto code_?;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     (*(Dictionary_2_System_Int32_System_Object_ **)(TVar2.m_Index + 0xc),
                      (int32_t)pMVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
      if (((MVCubeModelInstance__Class *)wo != (MVCubeModelInstance__Class *)0x0) &&
         ((pIVar6 = (((MVCubeModelInstance__Class *)wo)->_0).image,
          pMVar1 = TypeInfo__MVCubeModelInstance,
          *(byte *)&pIVar6[4].assembly < (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
          (*(MVCubeModelInstance__Class **)
            ((pIVar6[2].typeCount - 4) +
            (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) !=
           TypeInfo__MVCubeModelInstance)))) goto code_?;
      if (*(Dictionary_2_System_Int32_System_Object_ **)(TVar2.m_Index + 0xc) ==
          (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     (*(Dictionary_2_System_Int32_System_Object_ **)(TVar2.m_Index + 0xc),key,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
      if (((MVCubeModelInstance__Class *)wo != (MVCubeModelInstance__Class *)0x0) &&
         ((pIVar6 = (((MVCubeModelInstance__Class *)wo)->_0).image,
          pMVar1 = (MVCubeModelInstance__Class *)TypeInfo__MVSentryGun,
          *(byte *)&pIVar6[4].assembly < (TypeInfo__MVSentryGun->_1).naturalAligment ||
          (*(MVSentryGun__Class **)
            ((pIVar6[2].typeCount - 4) + (uint)(TypeInfo__MVSentryGun->_1).naturalAligment * 4) !=
           TypeInfo__MVSentryGun)))) goto code_?;
      pMVar1 = (MVCubeModelInstance__Class *)
               MVBlueprintBase::MVBlueprintBase_GetChild
                         ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0)
      ;
      if (pMVar1 == (MVCubeModelInstance__Class *)0x0) {
        pMVar1 = (MVCubeModelInstance__Class *)0x0;
code_?:
        pMVar7 = MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
        if (pMVar7 == (MVWorldObjectClient *)0x0) {
          pMVar7 = (MVWorldObjectClient *)0x0;
code_?:
          if ((pMVar1 != (MVCubeModelInstance__Class *)0x0) &&
             ((pMVar7 != (MVWorldObjectClient *)0x0 &&
              (cVar8 = (*(code *)(pMVar7->klass->vtable).CompareWithKoGaMaPackage.method)(pMVar7),
              cVar8 != '\0')))) {
            bVar9 = (*(code *)(pMVar1->_0).image[0xc].metadataHandle)(pMVar1);
            return bVar9;
          }
          return 0;
        }
        wo = (MVWorldObjectClient *)pMVar1;
        if (((TypeInfo__MVSentryGun->_1).naturalAligment <= (pMVar7->klass->_1).naturalAligment) &&
           ((MVSentryGun__Class *)
            (pMVar7->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
        goto code_?;
      }
      pIVar6 = (pMVar1->_0).image;
      wo = (MVWorldObjectClient *)TypeInfo__MVCubeModelInstance;
      if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= *(byte *)&pIVar6[4].assembly) &&
         (*(MVCubeModelInstance__Class **)
           ((pIVar6[2].typeCount - 4) +
           (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) ==
          TypeInfo__MVCubeModelInstance)) goto code_?;
      goto code_?;
    }
  }
code_?:
  uVar3 = func_?(wo,pMVar1);
code_?:
  func_?(uVar3);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_Initialize
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVSentryGunBlueprint_InitializeCommon(this,(MethodInfo *)0x0);
  if ((this->fields).editableCubes != (MVCubeModelInstance *)0x0) {
    MVCubeModelInstance::MVCubeModelInstance_EnableCulling
              ((this->fields).editableCubes,(MethodInfo *)0x0);
  }
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_InitializeCommon
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__);
    func_?(&TypeInfo__MVSentryGun);
    func_?(&StringLiteral_editableCubeModel);
    func_?(&StringLiteral_MVSentryGunBlueprint_does_not_ha);
    func_?(&StringLiteral_sentryGun);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Missing_editable_cubes);
    func_?(&StringLiteral_Missing_gun);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._._.data;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar1.m_Index == 0)) {
code_?:
    func_?();
  }
  else {
    if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar1.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pMVar2 = (MVCubeModelInstance *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0);
    if (pMVar2 == (MVCubeModelInstance *)0x0) {
      (this->fields).editableCubes = (MVCubeModelInstance *)0x0;
code_?:
      func_?();
      pMVar3 = (MVSentryGun *)
               MVBlueprintBase::MVBlueprintBase_GetChild
                         ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
      if (pMVar3 == (MVSentryGun *)0x0) {
        (this->fields).gun = (MVSentryGun *)0x0;
code_?:
        func_?();
        if ((this->fields).editableCubes == (MVCubeModelInstance *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
          return;
        }
        if ((this->fields).gun == (MVSentryGun *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
          return;
        }
        pMVar3 = (this->fields).gun;
        this_01 = (HashSet_1_System_Int32_ *)func_?();
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        pMVar4 = (this->fields).gun;
        if ((pMVar4 != (MVSentryGun *)0x0) && (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_01,(pMVar4->fields)._._._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pMVar2 = (this->fields).editableCubes;
          if (pMVar2 != (MVCubeModelInstance *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this_01,(pMVar2->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            (pMVar3->fields)._RaycastIgnoreWorldObjectIds_k__BackingField = this_01;
            func_?(&(pMVar3->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,this_01);
            pMVar3 = (this->fields).gun;
            if (pMVar3 != (MVSentryGun *)0x0) {
              uVar5 = *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4);
              piVar6 = &(pMVar3->fields)._._.interactionFlags;
              *(uint *)piVar6 = (uint)*piVar6 | 0x30;
              *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4) = uVar5;
              pMVar2 = (this->fields).editableCubes;
              if (pMVar2 != (MVCubeModelInstance *)0x0) {
                piVar6 = &(pMVar2->fields)._._.interactionFlags;
                *(uint *)piVar6 = (uint)*piVar6 | 0x30;
                *(undefined4 *)((int)&(pMVar2->fields)._._.interactionFlags + 4) =
                     *(undefined4 *)((int)&(pMVar2->fields)._._.interactionFlags + 4);
                pMVar2 = (this->fields).editableCubes;
                this_02 = (Func_1_Object_ *)
                          func_?(TypeInfo__System__Func<IModelingConstraint>);
                mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                          (this_02,(Object *)this,
                           MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                           (MethodInfo *)0x0);
                if (pMVar2 != (MVCubeModelInstance *)0x0) {
                  (pMVar2->fields)._._ModelingConstraintBuilder_k__BackingField =
                       (Func_1_IModelingConstraint_ *)this_02;
                  func_?(&(pMVar2->fields)._._ModelingConstraintBuilder_k__BackingField,
                                  this_02);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (((TypeInfo__MVSentryGun->_1).naturalAligment <= (pMVar3->klass->_1).naturalAligment) &&
         ((MVSentryGun__Class *)
          (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
          TypeInfo__MVSentryGun)) {
        (this->fields).gun = pMVar3;
        if (((TypeInfo__MVSentryGun->_1).naturalAligment <= (pMVar3->klass->_1).naturalAligment) &&
           ((MVSentryGun__Class *)
            (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
      }
    }
    else if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
              (pMVar2->klass->_1).naturalAligment) &&
            ((MVCubeModelInstance__Class *)
             (pMVar2->klass->_1).typeHierarchy
             [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
             TypeInfo__MVCubeModelInstance)) {
      (this->fields).editableCubes = pMVar2;
      if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
           (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1]
          == TypeInfo__MVCubeModelInstance)) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_InitializeInventory
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__);
    func_?(&TypeInfo__MVSentryGun);
    func_?(&StringLiteral_editableCubeModel);
    func_?(&StringLiteral_MVSentryGunBlueprint_does_not_ha);
    func_?(&StringLiteral_sentryGun);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Missing_editable_cubes);
    func_?(&StringLiteral_Missing_gun);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (in_stack_1->fields)._._._.data;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) {
code_?:
    func_?();
  }
  else {
    if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar2.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_03,(in_stack_1->fields)._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pMVar3 = (MVBlueprintBase__Class *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       (in_stack_1,StringLiteral_editableCubeModel,(MethodInfo *)0x0);
    if (pMVar3 == (MVBlueprintBase__Class *)0x0) {
      in_stack_1[1].klass = (MVBlueprintBase__Class *)0x0;
code_?:
      func_?();
      pMVar4 = MVBlueprintBase::MVBlueprintBase_GetChild
                         (in_stack_1,StringLiteral_sentryGun,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObjectClient *)0x0) {
        in_stack_1[1].monitor = (MonitorData *)0x0;
code_?:
        func_?();
        if (in_stack_1[1].klass == (MVBlueprintBase__Class *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
          return;
        }
        if (in_stack_1[1].monitor == (MonitorData *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
          return;
        }
        pMVar5 = in_stack_1[1].monitor;
        this_01 = (HashSet_1_System_Int32_ *)func_?();
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if ((in_stack_1[1].monitor != (MonitorData *)0x0) &&
           (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_01,*(int32_t *)(in_stack_1[1].monitor + 8),
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          if (in_stack_1[1].klass != (MVBlueprintBase__Class *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this_01,(int32_t)((in_stack_1[1].klass)->_0).name,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            *(HashSet_1_System_Int32_ **)(pMVar5 + 0xfc) = this_01;
            func_?(pMVar5 + 0xfc,this_01);
            pMVar5 = in_stack_1[1].monitor;
            if (pMVar5 != (MonitorData *)0x0) {
              *(uint *)(pMVar5 + 0xb8) = *(uint *)(pMVar5 + 0xb8) | 0x30;
              *(undefined4 *)(pMVar5 + 0xbc) = *(undefined4 *)(pMVar5 + 0xbc);
              pMVar3 = in_stack_1[1].klass;
              if (pMVar3 != (MVBlueprintBase__Class *)0x0) {
                uVar6._0_1_ = (pMVar3->_1).naturalAligment;
                uVar6._1_1_ = (pMVar3->_1).packingSize;
                uVar6._2_2_ = *(undefined2 *)&(pMVar3->_1).field_0x56;
                uVar6 = uVar6 | 0x30;
                (pMVar3->_1).naturalAligment = (char)uVar6;
                (pMVar3->_1).packingSize = (char)(uVar6 >> 8);
                *(short *)&(pMVar3->_1).field_0x56 = (short)(uVar6 >> 0x10);
                (pMVar3->vtable).Equals.methodPtr = (pMVar3->vtable).Equals.methodPtr;
                pMVar3 = in_stack_1[1].klass;
                this_02 = (Func_1_Object_ *)
                          func_?(TypeInfo__System__Func<IModelingConstraint>);
                mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                          (this_02,(Object *)in_stack_1,
                           MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                           (MethodInfo *)0x0);
                if (pMVar3 != (MVBlueprintBase__Class *)0x0) {
                  (pMVar3->vtable).get_Position.method = (MethodInfo *)this_02;
                  func_?(&(pMVar3->vtable).get_Position.method,this_02);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (((TypeInfo__MVSentryGun->_1).naturalAligment <= (pMVar4->klass->_1).naturalAligment) &&
         ((MVSentryGun__Class *)
          (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
          TypeInfo__MVSentryGun)) {
        in_stack_1[1].monitor = (MonitorData *)pMVar4;
        if (((TypeInfo__MVSentryGun->_1).naturalAligment <= (pMVar4->klass->_1).naturalAligment) &&
           ((MVSentryGun__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
      }
    }
    else {
      pMVar7 = (MVWorldObjectClient__Class *)(pMVar3->_0).image;
      if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (pMVar7->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)
          (pMVar7->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
          TypeInfo__MVCubeModelInstance)) {
        in_stack_1[1].klass = pMVar3;
        pMVar7 = (MVWorldObjectClient__Class *)(pMVar3->_0).image;
        if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (pMVar7->_1).naturalAligment) &&
           ((MVCubeModelInstance__Class *)
            (pMVar7->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
            TypeInfo__MVCubeModelInstance)) goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_OnEnterObject
               (MVSentryGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pMVar1 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).FocusOnObject.method)(pMVar1,this,0x40000000,0,0,0);
      pMVar2 = (this->fields).editableCubes;
      if ((pMVar2 != (MVCubeModelInstance *)0x0) && (e != (EditorStateMachine *)0x0)) {
        EditorStateMachine::EditorStateMachine_SelectWO
                  (e,(pMVar2->fields)._._._.id,0,1,(MethodInfo *)0x0);
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_OnExitObject
               (MVSentryGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
    e = (EditorStateMachine *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&e);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* IModelingConstraint <InitializeCommon>b__9_0() */

IModelingConstraint *
Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint__InitializeCommon_b__9_0
          (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingBoxCountConstraint);
    cRam_? = '\x01';
  }
  cubeModel = (this->fields).editableCubes;
  uVar1._0_2_ = 0;
  uVar1._2_2_ = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xffffffec,-4,-2,-4,(MethodInfo *)0x0);
  uVar2._0_2_ = 0;
  uVar2._2_2_ = 0;
  iVar3 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,3,8,3,(MethodInfo *)0x0);
  this_00 = (ModelingBoxCountConstraint *)func_?(TypeInfo__ModelingBoxCountConstraint);
  minCorner.z = (int16_t)cubeModel;
  minCorner.x = (int16_t)uVar1;
  minCorner.y = SUB42(uVar1,2);
  maxCorner.z = iVar3;
  maxCorner.x = (int16_t)uVar2;
  maxCorner.y = SUB42(uVar2,2);
  ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
            (this_00,(MVCubeModelBase *)cubeModel,minCorner,maxCorner,0x32,(MethodInfo *)0x0);
  return (IModelingConstraint *)this_00;
}


/* MVSentryGunBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
               (MVSentryGunBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x1000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_get_DocumentationType
          (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if ((this->fields).gun != (MVSentryGun *)0x0) {
    pMVar1 = (this->fields).gun;
    pMVar2 = pMVar1->klass;
    MVar3 = (*(code *)(pMVar2->vtable).get_DocumentationType.method)
                      (pMVar1,(pMVar2->vtable).TraverseRecursiveTail.methodPtr);
    return MVar3;
  }
  return MVWorldObjectDocumentationType__Enum_FireSentryTower;
}

