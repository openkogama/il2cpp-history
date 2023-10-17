
/* Void AddPreviewBoxesToTeleporters() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_AddPreviewBoxesToTeleporters
               (MVTeleportGroup *this,MethodInfo *method)

{
  pMVar1 = (this->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    (*(pMVar1->klass->vtable).AddPreviewBox.methodPtr)
              (pMVar1,(pMVar1->klass->vtable).AddPreviewBox.method);
    pMVar1 = (this->fields).teleporter2;
    if (pMVar1 != (MVTeleporter *)0x0) {
      (*(pMVar1->klass->vtable).AddPreviewBox.methodPtr)
                (pMVar1,(pMVar1->klass->vtable).AddPreviewBox.method);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_Initialize
               (MVTeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__
                   );
    func_?(&StringLiteral_TeleportGroup_does_not_have_any_);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Missing_teleporter_2);
    func_?(&StringLiteral_Missing_teleporter_1);
    func_?(&StringLiteral_teleporter2);
    func_?(&StringLiteral_BlueprintData);
    func_?(&StringLiteral_teleporter1);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._._.data;
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (unaff_EDI = (MVTeleporter__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_00,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_EDI == (MVTeleporter__Class *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pIVar1 = (unaff_EDI->_0).image;
    if ((*(byte *)&pIVar1[4].nameNoExt <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar1[2].typeCount - 4) +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_02 = (MVTeleporter__Class *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                         (Object *)StringLiteral_ChildrenMap,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    key = StringLiteral_teleporter1;
    if (this_02 == (MVTeleporter__Class *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_TeleportGroup_does_not_have_any_,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (pMVar2,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pIVar1 = (this_02->_0).image;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= *(byte *)&pIVar1[4].nameNoExt) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar1[2].typeCount - 4) +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
                         (Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
code_?:
        pMVar4 = (MVTeleporter *)0x0;
code_?:
        (this->fields).teleporter1 = pMVar4;
        func_?();
        unaff_EDI = (MVTeleporter__Class *)StringLiteral_teleporter2;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
          func_?(&TypeInfo__System__Int32);
          func_?(&TypeInfo__MVTeleporter);
          cRam_? = '\x01';
        }
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
                           (Object *)unaff_EDI,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
code_?:
          pMVar4 = (MVTeleporter *)0x0;
          unaff_EDI = this_02;
        }
        else {
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)this_02,
                              (Object *)unaff_EDI,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((unaff_EDI == (MVTeleporter__Class *)0x0) || (pOVar5 == (Object *)0x0))
          goto code_?;
          if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar6 = (int32_t *)func_?();
          pMVar4 = (MVTeleporter *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             ((MVWorldObjectClientManager *)unaff_EDI,*piVar6,(MethodInfo *)0x0);
          this_02 = unaff_EDI;
          if (((pMVar4 == (MVTeleporter *)0x0) ||
              (this_02 = TypeInfo__MVTeleporter,
              (pMVar4->klass->_1).typeHierarchyDepth <
              (TypeInfo__MVTeleporter->_1).typeHierarchyDepth)) ||
             ((MVTeleporter__Class *)
              (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1]
              != TypeInfo__MVTeleporter)) goto code_?;
          unaff_EDI = TypeInfo__MVTeleporter;
          if ((MVTeleporter__Class *)
              (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1]
              != TypeInfo__MVTeleporter) {
            pMVar4 = (MVTeleporter *)0x0;
          }
        }
        (this->fields).teleporter2 = pMVar4;
        func_?();
        if ((this->fields).teleporter1 == (MVTeleporter *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Missing_teleporter_1,(MethodInfo *)0x0);
        }
        if ((this->fields).teleporter2 == (MVTeleporter *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Missing_teleporter_2,(MethodInfo *)0x0);
        }
        if ((this->fields).teleporter1 == (MVTeleporter *)0x0) {
          return;
        }
        if ((this->fields).teleporter2 == (MVTeleporter *)0x0) {
          return;
        }
        (((this->fields).teleporter1)->fields).target = (this->fields).teleporter2;
        func_?();
        pMVar4 = (this->fields).teleporter2;
        if (pMVar4 != (MVTeleporter *)0x0) {
          (pMVar4->fields).target = (this->fields).teleporter1;
          func_?();
          pMVar4 = (this->fields).teleporter1;
          if (pMVar4 != (MVTeleporter *)0x0) {
            uVar7 = *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4);
            piVar8 = &(pMVar4->fields)._._.interactionFlags;
            *(uint *)piVar8 = (uint)*piVar8 | 8;
            *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4) = uVar7;
            pMVar4 = (this->fields).teleporter2;
            if (pMVar4 != (MVTeleporter *)0x0) {
              uVar7 = *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4);
              piVar8 = &(pMVar4->fields)._._.interactionFlags;
              *(uint *)piVar8 = (uint)*piVar8 | 8;
              *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4) = uVar7;
              bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                                 (MethodInfo *)0x0);
              if (bVar3 == 0) {
code_?:
                uVar7 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
                piVar8 = &(this->fields)._._._.interactionFlags;
                *(uint *)piVar8 = (uint)*piVar8 | 0x40;
                *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar7;
                this_01 = (this->fields)._._._.gameObject;
                if ((this_01 != (GameObject *)0x0) &&
                   (this_03 = (TeleportGroup *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponent_1
                                        (this_01,
                                         TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__
                                        ), this_03 != (TeleportGroup *)0x0)) {
                  TeleportGroup::TeleportGroup_Initialize(this_03,this,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                pMVar4 = (this->fields).teleporter1;
                if (pMVar4 != (MVTeleporter *)0x0) {
                  (*(pMVar4->klass->vtable).AddPreviewBox.methodPtr)();
                  pMVar4 = (this->fields).teleporter2;
                  if (pMVar4 != (MVTeleporter *)0x0) {
                    (*(pMVar4->klass->vtable).AddPreviewBox.methodPtr)();
                    pMVar4 = (this->fields).teleporter1;
                    if (pMVar4 != (MVTeleporter *)0x0) {
                      (pMVar4->fields)._._._.previewOwnerProfileId =
                           (this->fields)._._._._.previewOwnerProfileId;
                      pMVar4 = (this->fields).teleporter2;
                      if (pMVar4 != (MVTeleporter *)0x0) {
                        (pMVar4->fields)._._._.previewOwnerProfileId =
                             (this->fields)._._._._.previewOwnerProfileId;
                        pMVar4 = (this->fields).teleporter1;
                        if (pMVar4 != (MVTeleporter *)0x0) {
                          uVar7 = *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4);
                          piVar8 = &(pMVar4->fields)._._.interactionFlags;
                          *(uint *)piVar8 = (uint)*piVar8 | 0x20000;
                          *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4) = uVar7;
                          pMVar4 = (this->fields).teleporter2;
                          if (pMVar4 != (MVTeleporter *)0x0) {
                            uVar7 = *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4)
                            ;
                            piVar8 = &(pMVar4->fields)._._.interactionFlags;
                            *(uint *)piVar8 = (uint)*piVar8 | 0x20000;
                            *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4) = uVar7
                            ;
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      unaff_EDI = this_02;
      if ((pMVar2 == (MVWorldObjectClientManager *)0x0) || (pOVar5 == (Object *)0x0))
      goto code_?;
      if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar6 = (int32_t *)func_?();
        pMVar4 = (MVTeleporter *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar2,*piVar6,(MethodInfo *)0x0);
        if (((pMVar4 == (MVTeleporter *)0x0) ||
            ((pMVar4->klass->_1).typeHierarchyDepth <
             (TypeInfo__MVTeleporter->_1).typeHierarchyDepth)) ||
           ((MVTeleporter__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1]
            != TypeInfo__MVTeleporter)) goto code_?;
        if ((MVTeleporter__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1]
            != TypeInfo__MVTeleporter) {
          pMVar4 = (MVTeleporter *)0x0;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVTeleporter RetrieveTeleporter(Dictionary`2[System.Object,System.Object], String) */

MVTeleporter *
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_RetrieveTeleporter
          (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVTeleporter);
    cRam_? = '\x01';
  }
  if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)table,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (MVTeleporter *)0x0;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (table,(Object *)id,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) && (pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        pMVar4 = (MVTeleporter *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,*piVar3,(MethodInfo *)0x0);
        if (pMVar4 == (MVTeleporter *)0x0) {
          return (MVTeleporter *)0x0;
        }
        if ((pMVar4->klass->_1).typeHierarchyDepth < (TypeInfo__MVTeleporter->_1).typeHierarchyDepth
           ) {
          return (MVTeleporter *)0x0;
        }
        if ((MVTeleporter__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1]
            != TypeInfo__MVTeleporter) {
          return (MVTeleporter *)0x0;
        }
        if ((MVTeleporter__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1]
            != TypeInfo__MVTeleporter) {
          return (MVTeleporter *)0x0;
        }
        return pMVar4;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar4 = (MVTeleporter *)(*pcVar5)();
  return pMVar4;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_SetWorldObjectToPurchased
               (MVTeleportGroup *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    (*(pMVar1->klass->vtable).SetWorldObjectToPurchased.methodPtr)
              (pMVar1,(pMVar1->klass->vtable).SetWorldObjectToPurchased.method);
    pMVar1 = (this->fields).teleporter2;
    if (pMVar1 != (MVTeleporter *)0x0) {
      (*(pMVar1->klass->vtable).SetWorldObjectToPurchased.methodPtr)
                (pMVar1,(pMVar1->klass->vtable).SetWorldObjectToPurchased.method);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVTeleportGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup__ctor
               (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(pPVar1->fields).mvTeleportGroupPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_get_DocumentationType
          (MVTeleportGroup *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Teleporter;
}

