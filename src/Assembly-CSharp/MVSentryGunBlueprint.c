
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
    if (((TypeInfo__MVSentryGunBlueprint->_1).typeHierarchyDepth <=
         (wo->klass->_1).typeHierarchyDepth) &&
       ((MVSentryGunBlueprint__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVSentryGunBlueprint->_1).typeHierarchyDepth - 1]
        == TypeInfo__MVSentryGunBlueprint)) {
      this_00 = (wo->fields)._.data;
      if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (wo = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), (MVCubeModelInstance__Class *)wo == (MVCubeModelInstance__Class *)0x0))
      goto code_?;
      pIVar2 = (((MVCubeModelInstance__Class *)wo)->_0).image;
      pMVar1 = (MVCubeModelInstance__Class *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)&pIVar2[4].nameNoExt <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((pIVar2[2].typeCount - 4) +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)wo,
                      (Object *)StringLiteral_ChildrenMap,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      if ((MVCubeModelInstance__Class *)wo == (MVCubeModelInstance__Class *)0x0)
      goto code_?;
      pIVar2 = (((MVCubeModelInstance__Class *)wo)->_0).image;
      pMVar1 = (MVCubeModelInstance__Class *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)&pIVar2[4].nameNoExt <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((pIVar2[2].typeCount - 4) +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)wo,
                          (Object *)StringLiteral_editableCubeModel,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pIVar5 = (Int32Enum__Enum *)func_?();
      pMVar1 = (MVCubeModelInstance__Class *)*pIVar5;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)wo,
                          (Object *)StringLiteral_sentryGun,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar6);
      wo = (MVWorldObjectClient *)pMVar1;
      if (pOVar6 == (Object *)0x0) goto code_?;
      if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pIVar5 = (Int32Enum__Enum *)func_?(pOVar6);
      key = *pIVar5;
      if ((pOVar3 == (Object *)0x0) ||
         ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar3[1].monitor ==
          (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) goto code_?;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar3[1].monitor,
                      (Int32Enum__Enum)pMVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
      if (((MVCubeModelInstance__Class *)wo != (MVCubeModelInstance__Class *)0x0) &&
         ((pIVar2 = (((MVCubeModelInstance__Class *)wo)->_0).image,
          pMVar1 = TypeInfo__MVCubeModelInstance,
          *(byte *)&pIVar2[4].nameNoExt < (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth ||
          (*(MVCubeModelInstance__Class **)
            ((pIVar2[2].typeCount - 4) +
            (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) !=
           TypeInfo__MVCubeModelInstance)))) goto code_?;
      if ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar3[1].monitor ==
          (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar3[1].monitor,key,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
      if (((MVCubeModelInstance__Class *)wo != (MVCubeModelInstance__Class *)0x0) &&
         ((pIVar2 = (((MVCubeModelInstance__Class *)wo)->_0).image,
          pMVar1 = (MVCubeModelInstance__Class *)TypeInfo__MVSentryGun,
          *(byte *)&pIVar2[4].nameNoExt < (TypeInfo__MVSentryGun->_1).typeHierarchyDepth ||
          (*(MVSentryGun__Class **)
            ((pIVar2[2].typeCount - 4) + (uint)(TypeInfo__MVSentryGun->_1).typeHierarchyDepth * 4)
           != TypeInfo__MVSentryGun)))) goto code_?;
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
              (cVar8 = (*(pMVar7->klass->vtable).CompareWithKoGaMaPackage.methodPtr)(pMVar7),
              cVar8 != '\0')))) {
            bVar9 = (*(code *)(pMVar1->_0).image[0xc].nameToClassHashTable)(pMVar1);
            return bVar9;
          }
          return 0;
        }
        wo = (MVWorldObjectClient *)pMVar1;
        if (((TypeInfo__MVSentryGun->_1).typeHierarchyDepth <=
             (pMVar7->klass->_1).typeHierarchyDepth) &&
           ((MVSentryGun__Class *)
            (pMVar7->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
        goto code_?;
      }
      pIVar2 = (pMVar1->_0).image;
      wo = (MVWorldObjectClient *)TypeInfo__MVCubeModelInstance;
      if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <= *(byte *)&pIVar2[4].nameNoExt)
         && (*(MVCubeModelInstance__Class **)
              ((pIVar2[2].typeCount - 4) +
              (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) ==
             TypeInfo__MVCubeModelInstance)) goto code_?;
      goto code_?;
    }
  }
code_?:
  uVar4 = func_?(wo,pMVar1);
code_?:
  func_?(uVar4);
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
  pDVar1 = (this->fields)._._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    if (((pDVar1->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_ChildrenMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 == (Object *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_02,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (((pOVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar2->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pMVar3 = (MVCubeModelInstance *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0);
    if (pMVar3 == (MVCubeModelInstance *)0x0) {
      (this->fields).editableCubes = (MVCubeModelInstance *)0x0;
code_?:
      func_?();
      pMVar4 = (MVSentryGun *)
               MVBlueprintBase::MVBlueprintBase_GetChild
                         ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
      if (pMVar4 == (MVSentryGun *)0x0) {
        (this->fields).gun = (MVSentryGun *)0x0;
code_?:
        func_?();
        if ((this->fields).editableCubes == (MVCubeModelInstance *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
          return;
        }
        if ((this->fields).gun == (MVSentryGun *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
          return;
        }
        pMVar4 = (this->fields).gun;
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          pMVar5 = (this->fields).gun;
          if (pMVar5 != (MVSentryGun *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Add
                      ((HashSet_1_System_Object_ *)this_00,(Object *)(pMVar5->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            pMVar3 = (this->fields).editableCubes;
            if (pMVar3 != (MVCubeModelInstance *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__Add
                        ((HashSet_1_System_Object_ *)this_00,(Object *)(pMVar3->fields)._._._.id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              (pMVar4->fields)._RaycastIgnoreWorldObjectIds_k__BackingField =
                   (HashSet_1_System_Int32_ *)this_00;
              func_?(&(pMVar4->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,this_00
                             );
              pMVar4 = (this->fields).gun;
              if (pMVar4 != (MVSentryGun *)0x0) {
                uVar6 = *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4);
                piVar7 = &(pMVar4->fields)._._.interactionFlags;
                *(uint *)piVar7 = (uint)*piVar7 | 0x30;
                *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4) = uVar6;
                pMVar3 = (this->fields).editableCubes;
                if (pMVar3 != (MVCubeModelInstance *)0x0) {
                  piVar7 = &(pMVar3->fields)._._.interactionFlags;
                  *(uint *)piVar7 = (uint)*piVar7 | 0x30;
                  *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4) =
                       *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4);
                  pMVar3 = (this->fields).editableCubes;
                  this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                            func_?(TypeInfo__System__Func<IModelingConstraint>);
                  if ((this_01 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) &&
                     (mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::
                      Object]::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                                (this_01,(Object *)this,
                                 MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                                 (MethodInfo *)0x0), pMVar3 != (MVCubeModelInstance *)0x0)) {
                    (pMVar3->fields)._._ModelingConstraintBuilder_k__BackingField =
                         (Func_1_IModelingConstraint_ *)this_01;
                    func_?(&(pMVar3->fields)._._ModelingConstraintBuilder_k__BackingField,
                                    this_01);
                    return;
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (((TypeInfo__MVSentryGun->_1).typeHierarchyDepth <= (pMVar4->klass->_1).typeHierarchyDepth)
         && ((MVSentryGun__Class *)
             (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1]
             == TypeInfo__MVSentryGun)) {
        (this->fields).gun = pMVar4;
        if (((TypeInfo__MVSentryGun->_1).typeHierarchyDepth <=
             (pMVar4->klass->_1).typeHierarchyDepth) &&
           ((MVSentryGun__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
      }
    }
    else if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
              (pMVar3->klass->_1).typeHierarchyDepth) &&
            ((MVCubeModelInstance__Class *)
             (pMVar3->klass->_1).typeHierarchy
             [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
             TypeInfo__MVCubeModelInstance)) {
      (this->fields).editableCubes = pMVar3;
      if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
           (pMVar3->klass->_1).typeHierarchyDepth) &&
         ((MVCubeModelInstance__Class *)
          (pMVar3->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVCubeModelInstance)) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  pDVar1 = (in_stack_2->fields)._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    if (((pDVar1->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_ChildrenMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 == (Object *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_02,(in_stack_2->fields)._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (((pOVar3->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar3->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pMVar4 = (MVBlueprintBase__Class *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       (in_stack_2,StringLiteral_editableCubeModel,(MethodInfo *)0x0);
    if (pMVar4 == (MVBlueprintBase__Class *)0x0) {
      in_stack_2[1].klass = (MVBlueprintBase__Class *)0x0;
code_?:
      func_?();
      pMVar5 = MVBlueprintBase::MVBlueprintBase_GetChild
                         (in_stack_2,StringLiteral_sentryGun,(MethodInfo *)0x0);
      if (pMVar5 == (MVWorldObjectClient *)0x0) {
        in_stack_2[1].monitor = (MonitorData *)0x0;
code_?:
        func_?();
        if (in_stack_2[1].klass == (MVBlueprintBase__Class *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
          return;
        }
        if (in_stack_2[1].monitor == (MonitorData *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
          return;
        }
        pMVar6 = in_stack_2[1].monitor;
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          if (in_stack_2[1].monitor != (MonitorData *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Add
                      ((HashSet_1_System_Object_ *)this_00,
                       *(Object **)(in_stack_2[1].monitor + 8),
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__Add
                        ((HashSet_1_System_Object_ *)this_00,
                         (Object *)((in_stack_2[1].klass)->_0).name,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              *(HashSet_1_UnityEngine_Vector3_ **)(pMVar6 + 0xfc) = this_00;
              func_?(pMVar6 + 0xfc,this_00);
              pMVar6 = in_stack_2[1].monitor;
              if (pMVar6 != (MonitorData *)0x0) {
                *(uint *)(pMVar6 + 0xb8) = *(uint *)(pMVar6 + 0xb8) | 0x30;
                *(undefined4 *)(pMVar6 + 0xbc) = *(undefined4 *)(pMVar6 + 0xbc);
                pMVar4 = in_stack_2[1].klass;
                if (pMVar4 != (MVBlueprintBase__Class *)0x0) {
                  uVar7._0_1_ = (pMVar4->_1).naturalAligment;
                  uVar7._1_1_ = (pMVar4->_1).packingSize;
                  uVar7._2_2_ = *(undefined2 *)&(pMVar4->_1).field_0x56;
                  uVar7 = uVar7 | 0x30;
                  (pMVar4->_1).naturalAligment = (char)uVar7;
                  (pMVar4->_1).packingSize = (char)(uVar7 >> 8);
                  *(short *)&(pMVar4->_1).field_0x56 = (short)(uVar7 >> 0x10);
                  (pMVar4->vtable).Equals.methodPtr = (pMVar4->vtable).Equals.methodPtr;
                  pMVar4 = in_stack_2[1].klass;
                  this_01 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                            func_?(TypeInfo__System__Func<IModelingConstraint>);
                  if ((this_01 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) &&
                     (mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::
                      Object]::RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                                (this_01,(Object *)in_stack_2,
                                 MethodInfo__MVSentryGunBlueprint___InitializeCommon_b__9_0__,
                                 (MethodInfo *)0x0), pMVar4 != (MVBlueprintBase__Class *)0x0)) {
                    (pMVar4->vtable).get_Position.method = (MethodInfo *)this_01;
                    func_?(&(pMVar4->vtable).get_Position.method,this_01);
                    return;
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (((TypeInfo__MVSentryGun->_1).typeHierarchyDepth <= (pMVar5->klass->_1).typeHierarchyDepth)
         && ((MVSentryGun__Class *)
             (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1]
             == TypeInfo__MVSentryGun)) {
        in_stack_2[1].monitor = (MonitorData *)pMVar5;
        if (((TypeInfo__MVSentryGun->_1).typeHierarchyDepth <=
             (pMVar5->klass->_1).typeHierarchyDepth) &&
           ((MVSentryGun__Class *)
            (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1] ==
            TypeInfo__MVSentryGun)) goto code_?;
      }
    }
    else {
      pMVar8 = (MVWorldObjectClient__Class *)(pMVar4->_0).image;
      if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <= (pMVar8->_1).typeHierarchyDepth
          ) && ((MVCubeModelInstance__Class *)
                (pMVar8->_1).typeHierarchy
                [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
                TypeInfo__MVCubeModelInstance)) {
        in_stack_2[1].klass = pMVar4;
        pMVar8 = (MVWorldObjectClient__Class *)(pMVar4->_0).image;
        if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
             (pMVar8->_1).typeHierarchyDepth) &&
           ((MVCubeModelInstance__Class *)
            (pMVar8->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1]
            == TypeInfo__MVCubeModelInstance)) goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
      (*(pMVar1->klass->vtable).FocusOnObject.methodPtr)(pMVar1,this,0x40000000,0,0,0);
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
  if (this_00 != (ModelingBoxCountConstraint *)0x0) {
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
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar5 = (IModelingConstraint *)(*pcVar4)();
  return pIVar5;
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
    MVar3 = (*(pMVar2->vtable).get_DocumentationType.methodPtr)
                      (pMVar1,(pMVar2->vtable).get_DocumentationType.method);
    return MVar3;
  }
  return MVWorldObjectDocumentationType__Enum_FireSentryTower;
}

