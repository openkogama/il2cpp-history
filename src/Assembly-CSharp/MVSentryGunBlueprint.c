
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
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  bVar1 = (TypeInfo__MVSentryGunBlueprint->_1).naturalAligment;
  pMVar2 = TypeInfo__MVSentryGunBlueprint;
  if (((wo->klass->_1).naturalAligment < bVar1) ||
     ((MVSentryGunBlueprint__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] !=
      TypeInfo__MVSentryGunBlueprint)) goto code_?;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(wo->fields)._.data;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ),
     wo = (MVWorldObjectClient *)
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
     TVar3.m_Index == 0)) goto code_?;
  bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  wo = (MVWorldObjectClient *)
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) < bVar1) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar1 * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
code_?:
    uVar4 = func_?(TVar3.m_Index,wo);
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar3.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this_01 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    wo = (MVWorldObjectClient *)
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (TVar3.m_Index == 0) goto code_?;
    bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    wo = (MVWorldObjectClient *)
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) < bVar1) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar1 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar3.m_Index,(Object *)StringLiteral_editableCubeModel,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    wo = (MVWorldObjectClient *)TVar3;
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar6 = (int32_t *)func_?();
      key = *piVar6;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (TVar3.m_Index,(Object *)StringLiteral_sentryGun,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar6 = (int32_t *)func_?(TVar3.m_Index);
      key_00 = *piVar6;
      if (_UNK_? == (Dictionary_2_System_Int32_System_Object_ *)0x0) {
code_?:
        func_?();
      }
      else {
        TVar3.m_Index =
             (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                (_UNK_?,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                );
        wo = (MVWorldObjectClient *)TypeInfo__MVCubeModelInstance;
        if ((MVCubeModelInstance__Class *)TVar3.m_Index != (MVCubeModelInstance__Class *)0x0) {
          pIVar7 = (((MVCubeModelInstance__Class *)TVar3.m_Index)->_0).image;
          bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
          if ((*(byte *)&pIVar7[4].assembly < bVar1) ||
             (*(MVCubeModelInstance__Class **)((pIVar7[2].typeCount - 4) + (uint)bVar1 * 4) !=
              TypeInfo__MVCubeModelInstance)) goto code_?;
        }
        if (_UNK_? == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        TVar3.m_Index =
             (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                (_UNK_?,key_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                );
        if ((MVCubeModelInstance__Class *)TVar3.m_Index != (MVCubeModelInstance__Class *)0x0) {
          pIVar7 = (((MVCubeModelInstance__Class *)TVar3.m_Index)->_0).image;
          bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
          wo = (MVWorldObjectClient *)TypeInfo__MVSentryGun;
          if ((*(byte *)&pIVar7[4].assembly < bVar1) ||
             (*(MVSentryGun__Class **)((pIVar7[2].typeCount - 4) + (uint)bVar1 * 4) !=
              TypeInfo__MVSentryGun)) goto code_?;
        }
        TVar3.m_Index =
             (int32_t)MVBlueprintBase::MVBlueprintBase_GetChild
                                ((MVBlueprintBase *)this_01,StringLiteral_editableCubeModel,
                                 (MethodInfo *)0x0);
        if ((MVCubeModelInstance__Class *)TVar3.m_Index == (MVCubeModelInstance__Class *)0x0) {
          TVar3.m_Index = 0;
        }
        else {
          pIVar7 = (((MVCubeModelInstance__Class *)TVar3.m_Index)->_0).image;
          bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
          wo = (MVWorldObjectClient *)TypeInfo__MVCubeModelInstance;
          if ((*(byte *)&pIVar7[4].assembly < bVar1) ||
             (*(MVCubeModelInstance__Class **)((pIVar7[2].typeCount - 4) + (uint)bVar1 * 4) !=
              TypeInfo__MVCubeModelInstance)) goto code_?;
        }
        pMVar8 = MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this_01,StringLiteral_sentryGun,(MethodInfo *)0x0);
        if (pMVar8 == (MVWorldObjectClient *)0x0) {
          pMVar8 = (MVWorldObjectClient *)0x0;
code_?:
          if (((MVCubeModelInstance__Class *)TVar3.m_Index != (MVCubeModelInstance__Class *)0x0) &&
             ((pMVar8 != (MVWorldObjectClient *)0x0 &&
              (cVar9 = (*(code *)(pMVar8->klass->vtable).CompareWithKoGaMaPackage.method)(),
              cVar9 != '\0')))) {
            bVar10 = (*(code *)(((MVCubeModelInstance__Class *)TVar3.m_Index)->_0).image[0xc].
                              codeGenModule)();
            return bVar10;
          }
          return 0;
        }
        bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        wo = (MVWorldObjectClient *)TVar3.m_Index;
        if ((bVar1 <= (pMVar8->klass->_1).naturalAligment) &&
           ((MVSentryGun__Class *)(pMVar8->klass->_1).typeHierarchy[bVar1 - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
      }
      func_?();
      TVar3.m_Index = (int32_t)extraout_EDX;
      goto code_?;
    }
  }
code_?:
  func_?(uVar4);
  pMVar2 = extraout_EDX_00;
code_?:
  func_?(wo,pMVar2);
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_Initialize
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVSentryGunBlueprint_InitializeCommon(this,(MethodInfo *)0x0);
  if ((this->fields).editableCubes != (MVCubeModelInstance *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_00,(Object *)in_stack_1,
               MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_,
               (MethodInfo *)0x0);
    MVCubeModelInstance::MVCubeModelInstance_SetupCulling
              (in_stack_1,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    return;
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
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_BlueprintData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ),
     unaff_ESI.m_Index =
          (int32_t)
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
     this_01.m_Index == 0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar1 <= *(byte *)(*(int *)this_01.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar1 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01.m_Index,(Object *)StringLiteral_ChildrenMap,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      if (unaff_ESI.m_Index == 0) {
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
      bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) < bVar1) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 + (uint)bVar1 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pMVar2 = (MVCubeModelInstance *)
               MVBlueprintBase::MVBlueprintBase_GetChild
                         ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0)
      ;
      if (pMVar2 == (MVCubeModelInstance *)0x0) {
        (this->fields).editableCubes = (MVCubeModelInstance *)0x0;
code_?:
        unaff_ESI.m_Index = (int32_t)&(this->fields).editableCubes;
        func_?();
        pMVar3 = (MVSentryGun *)
                 MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
        if (pMVar3 == (MVSentryGun *)0x0) {
          (this->fields).gun = (MVSentryGun *)0x0;
          object = this;
code_?:
          ppMVar4 = &(this->fields).gun;
          func_?();
          if (*(MVCubeModelInstance **)unaff_ESI.m_Index == (MVCubeModelInstance *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
            return;
          }
          pMVar3 = *ppMVar4;
          if (pMVar3 == (MVSentryGun *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
            return;
          }
          this_02 = (HashSet_1_System_Int32_ *)func_?();
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32___ctor
                    (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          if ((*ppMVar4 != (MVSentryGun *)0x0) && (this_02 != (HashSet_1_System_Int32_ *)0x0)) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this_02,((*ppMVar4)->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (*(MVCubeModelInstance **)unaff_ESI.m_Index != (MVCubeModelInstance *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                        (this_02,((*(MVCubeModelInstance **)unaff_ESI.m_Index)->fields)._._._.id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              ppHVar5 = &(pMVar3->fields)._RaycastIgnoreWorldObjectIds_k__BackingField;
              *ppHVar5 = this_02;
              func_?(ppHVar5,this_02);
              pMVar3 = *ppMVar4;
              if (pMVar3 != (MVSentryGun *)0x0) {
                uVar6 = *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4);
                piVar7 = &(pMVar3->fields)._._.interactionFlags;
                *(uint *)piVar7 = (uint)*piVar7 | 0x30;
                *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4) = uVar6;
                pMVar2 = *(MVCubeModelInstance **)unaff_ESI.m_Index;
                if (pMVar2 != (MVCubeModelInstance *)0x0) {
                  piVar7 = &(pMVar2->fields)._._.interactionFlags;
                  *(uint *)piVar7 = (uint)*piVar7 | 0x30;
                  *(undefined4 *)((int)&(pMVar2->fields)._._.interactionFlags + 4) =
                       *(undefined4 *)((int)&(pMVar2->fields)._._.interactionFlags + 4);
                  pMVar2 = *(MVCubeModelInstance **)unaff_ESI.m_Index;
                  unaff_ESI.m_Index = func_?(TypeInfo__System__Func<IModelingConstraint>);
                  mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                            ((Func_1_Object_ *)unaff_ESI.m_Index,(Object *)object,
                             MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                             (MethodInfo *)0x0);
                  if (pMVar2 != (MVCubeModelInstance *)0x0) {
                    ppFVar8 = &(pMVar2->fields)._._ModelingConstraintBuilder_k__BackingField;
                    *ppFVar8 = (Func_1_IModelingConstraint_ *)unaff_ESI.m_Index;
                    func_?(ppFVar8,unaff_ESI.m_Index);
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
        bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if (((pMVar3->klass->_1).naturalAligment < bVar1) ||
           ((MVSentryGun__Class *)(pMVar3->klass->_1).typeHierarchy[bVar1 - 1] !=
            TypeInfo__MVSentryGun)) goto code_?;
        (this->fields).gun = pMVar3;
        bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if ((bVar1 <= (pMVar3->klass->_1).naturalAligment) &&
           (object = (MVSentryGunBlueprint *)unaff_ESI.m_Index,
           (MVSentryGun__Class *)(pMVar3->klass->_1).typeHierarchy[bVar1 - 1] ==
           TypeInfo__MVSentryGun)) goto code_?;
        goto code_?;
      }
      bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      unaff_ESI.m_Index = (int32_t)TypeInfo__MVCubeModelInstance;
      if (((pMVar2->klass->_1).naturalAligment < bVar1) ||
         ((MVCubeModelInstance__Class *)(pMVar2->klass->_1).typeHierarchy[bVar1 - 1] !=
          TypeInfo__MVCubeModelInstance)) goto code_?;
      unaff_ESI.m_Index = (int32_t)&(this->fields).editableCubes;
      *(MVCubeModelInstance **)unaff_ESI.m_Index = pMVar2;
      bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((bVar1 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)(pMVar2->klass->_1).typeHierarchy[bVar1 - 1] ==
          TypeInfo__MVCubeModelInstance)) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_ESI.m_Index);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar3 <= *(byte *)(*(int *)TVar2.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar2.m_Index + 100) + -4 + (uint)bVar3 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
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
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) < bVar3) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar2.m_Index + 100) + -4 + (uint)bVar3 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pMVar4 = (MVBlueprintBase__Class *)
               MVBlueprintBase::MVBlueprintBase_GetChild
                         (in_stack_1,StringLiteral_editableCubeModel,(MethodInfo *)0x0);
      if (pMVar4 == (MVBlueprintBase__Class *)0x0) {
        in_stack_1[1].klass = (MVBlueprintBase__Class *)0x0;
code_?:
        pMVar5 = in_stack_1 + 1;
        func_?();
        pMVar6 = MVBlueprintBase::MVBlueprintBase_GetChild
                           (in_stack_1,StringLiteral_sentryGun,(MethodInfo *)0x0);
        if (pMVar6 == (MVWorldObjectClient *)0x0) {
          in_stack_1[1].monitor = (MonitorData *)0x0;
          object = in_stack_1;
code_?:
          ppMVar7 = &in_stack_1[1].monitor;
          func_?();
          if (pMVar5->klass == (MVBlueprintBase__Class *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
            return;
          }
          pMVar8 = *ppMVar7;
          if (pMVar8 == (MonitorData *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
            return;
          }
          this_01 = (HashSet_1_System_Int32_ *)func_?();
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32___ctor
                    (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          if ((*ppMVar7 != (MonitorData *)0x0) && (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this_01,*(int32_t *)(*ppMVar7 + 8),
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (pMVar5->klass != (MVBlueprintBase__Class *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                        (this_01,(int32_t)(pMVar5->klass->_0).name,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              *(HashSet_1_System_Int32_ **)(pMVar8 + 0xfc) = this_01;
              func_?(pMVar8 + 0xfc,this_01);
              pMVar8 = *ppMVar7;
              if (pMVar8 != (MonitorData *)0x0) {
                *(uint *)(pMVar8 + 0xb8) = *(uint *)(pMVar8 + 0xb8) | 0x30;
                *(undefined4 *)(pMVar8 + 0xbc) = *(undefined4 *)(pMVar8 + 0xbc);
                pMVar4 = pMVar5->klass;
                if (pMVar4 != (MVBlueprintBase__Class *)0x0) {
                  uVar9._0_1_ = (pMVar4->_1).naturalAligment;
                  uVar9._1_1_ = (pMVar4->_1).packingSize;
                  uVar9._2_2_ = *(undefined2 *)&(pMVar4->_1).field_0x56;
                  uVar9 = uVar9 | 0x30;
                  (pMVar4->_1).naturalAligment = (char)uVar9;
                  (pMVar4->_1).packingSize = (char)(uVar9 >> 8);
                  *(short *)&(pMVar4->_1).field_0x56 = (short)(uVar9 >> 0x10);
                  (pMVar4->vtable).Equals.methodPtr = (pMVar4->vtable).Equals.methodPtr;
                  pMVar4 = pMVar5->klass;
                  this_02 = (Func_1_Object_ *)
                            func_?(TypeInfo__System__Func<IModelingConstraint>);
                  mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                            (this_02,(Object *)object,
                             MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                             (MethodInfo *)0x0);
                  if (pMVar4 != (MVBlueprintBase__Class *)0x0) {
                    ppMVar10 = &(pMVar4->vtable).get_Position.method;
                    *ppMVar10 = (MethodInfo *)this_02;
                    func_?(ppMVar10,this_02);
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
        bVar3 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if (((pMVar6->klass->_1).naturalAligment < bVar3) ||
           ((MVSentryGun__Class *)(pMVar6->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__MVSentryGun)) goto code_?;
        in_stack_1[1].monitor = (MonitorData *)pMVar6;
        bVar3 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if ((bVar3 <= (pMVar6->klass->_1).naturalAligment) &&
           (object = pMVar5,
           (MVSentryGun__Class *)(pMVar6->klass->_1).typeHierarchy[bVar3 - 1] ==
           TypeInfo__MVSentryGun)) goto code_?;
        goto code_?;
      }
      pMVar11 = (MVWorldObjectClient__Class *)(pMVar4->_0).image;
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar11->_1).naturalAligment < bVar3) ||
         ((MVCubeModelInstance__Class *)(pMVar11->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVCubeModelInstance)) goto code_?;
      in_stack_1[1].klass = pMVar4;
      pMVar11 = (MVWorldObjectClient__Class *)(pMVar4->_0).image;
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((bVar3 <= (pMVar11->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)(pMVar11->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVCubeModelInstance)) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  pMVar1 = (this->fields).gun;
  if (pMVar1 != (MVSentryGun *)0x0) {
    MVar2 = (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)
                      (pMVar1,(pMVar1->klass->vtable).TraverseRecursiveTail.methodPtr);
    return MVar2;
  }
  return MVWorldObjectDocumentationType__Enum_FireSentryTower;
}

