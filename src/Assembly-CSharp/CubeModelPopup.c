
/* Void Initialize(Byte, Int32) */

void Assembly-CSharp.dll::CubeModelPopup::CubeModelPopup_Initialize
               (CubeModelPopup *this,uint8_t currentMaterialId,int32_t worldId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).materialID = currentMaterialId;
  (this->fields).woID = worldId;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields)._MaterialRepository_k__BackingField,
      pMVar4 != (MVMaterialRepository *)0x0)) &&
     (pMVar5 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (pMVar4,currentMaterialId,(MethodInfo *)0x0), pMVar5 != (MVMaterial *)0x0
     )) {
    if (((pMVar5->fields)._PhysicalProperties_k__BackingField.toughness != 0.0) ||
       ((pMVar5->fields).isUnlocked == 0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 == (MVGameControllerBase *)0x0) ||
          (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
         (pMVar4 = (pMVar3->fields)._MaterialRepository_k__BackingField,
         pMVar4 == (MVMaterialRepository *)0x0)) goto code_?;
      pMVar5 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (pMVar4,0x15,(MethodInfo *)0x0);
      (this->fields).materialID = 0x15;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar6 != (PrefabPool *)0x0) {
      pMVar7 = (pPVar6->fields).materialButtonTextureGenerator;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = (MaterialButtonTextureGenerator *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pMVar7,
                           MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                          );
      if ((pMVar7 != (MaterialButtonTextureGenerator *)0x0) &&
         ((pMVar7->fields).previewResolution = 0xb4, pMVar5 != (MVMaterial *)0x0)) {
        value = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                          (pMVar7,(pMVar5->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
        pRVar8 = (this->fields).scale25Percent;
        if (pRVar8 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (pRVar8,(Texture *)value,(MethodInfo *)0x0);
          pRVar8 = (this->fields).scale50Percent;
          if (pRVar8 != (RawImage *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (pRVar8,(Texture *)value,(MethodInfo *)0x0);
            pRVar8 = (this->fields).scale100Percent;
            if (pRVar8 != (RawImage *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object,value,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pTVar9 = (Texture2D *)(pRVar8->fields).m_Texture;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (value != (Texture2D *)0x0 || pTVar9 != (Texture2D *)0x0) {
                if (value == (Texture2D *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pTVar9 == (Texture2D *)0x0) {
                    FUN_?();
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  bVar1 = (pTVar9->fields)._._.m_CachedPtr == (void *)0x0;
                }
                else if (pTVar9 == (Texture2D *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar1 = (value->fields)._._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar1 = pTVar9 == value;
                }
                if (!bVar1) {
                  bVar1 = iRam_? != 0;
                  (pRVar8->fields).m_Texture = (Texture *)value;
                  if (bVar1) {
                    uVar11 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
                    puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar13 = *puVar12;
                      LOCK();
                      uVar14 = *puVar12;
                      if (uVar13 == uVar14) {
                        *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar13 != uVar14);
                  }
                  (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                            (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
                  (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                            (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnModelScalePressed(Single) */

void Assembly-CSharp.dll::CubeModelPopup::CubeModelPopup_OnModelScalePressed
               (CubeModelPopup *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICreateNewPrototype>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IChangePrototypeScale>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IChangePrototypeScale>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IChangePrototypeScale>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICreateNewPrototype>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICreateNewPrototype>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IMaterialClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CubeModelPopup____c___OnModelScalePressed_b__7_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CubeModelPopup____c__DisplayClass7_0___OnModelScalePressed_b__0_UnityEngine__EventSystems__IMaterialClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CubeModelPopup____c__DisplayClass7_0___OnModelScalePressed_b__1_UnityEngine__EventSystems__ICreateNewPrototype__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CubeModelPopup____c__DisplayClass7_0___OnModelScalePressed_b__2_UnityEngine__EventSystems__IChangePrototypeScale__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelPopup____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__CubeModelPopup____c__DisplayClass7_0);
  if (object_00 != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object_00[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    *(float *)&object_00[1].monitor = scale;
    if ((this->fields).cubeModelPopupAction == 0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar7 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar7,object_00,
                 MethodInfo__CubeModelPopup____c__DisplayClass7_0___OnModelScalePressed_b__0_UnityEngine__EventSystems__IMaterialClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IMaterialClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICreateNewPrototype>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,object_00,
                 MethodInfo__CubeModelPopup____c__DisplayClass7_0___OnModelScalePressed_b__1_UnityEngine__EventSystems__ICreateNewPrototype__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      method_00 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICreateNewPrototype>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICreateNewPrototype>_
      ;
    }
    else {
      if ((this->fields).cubeModelPopupAction != 1) {
        return;
      }
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar7 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IChangePrototypeScale>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar7,object_00,
                 MethodInfo__CubeModelPopup____c__DisplayClass7_0___OnModelScalePressed_b__2_UnityEngine__EventSystems__IChangePrototypeScale__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IChangePrototypeScale>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IChangePrototypeScale>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__CubeModelPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CubeModelPopup____c);
      }
      this_00 = TypeInfo__CubeModelPopup____c->static_fields->__9__7_3;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__CubeModelPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CubeModelPopup____c);
        }
        object = TypeInfo__CubeModelPopup____c->static_fields->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__CubeModelPopup____c___OnModelScalePressed_b__7_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__CubeModelPopup____c->static_fields->__9__7_3 = this_00;
        func_?(&TypeInfo__CubeModelPopup____c->static_fields->__9__7_3);
      }
      method_00 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
        method_00 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
      }
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar6,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               method_00);
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

