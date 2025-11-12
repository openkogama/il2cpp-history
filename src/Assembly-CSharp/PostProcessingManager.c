
/* Void Awake() */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_Awake
               (PostProcessingManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PostProcessingManager__HandlePostProcessCubeAddedRemoved_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).postProcessShader;
  pMVar2 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor(pMVar2,pSVar1,(MethodInfo *)0x0)
  ;
  bVar3 = iRam_? != 0;
  (this->fields).postProcessMaterial = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).postProcessMaterial >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pSVar1 = (this->fields).resampleShader;
  pMVar2 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor(pMVar2,pSVar1,(MethodInfo *)0x0)
  ;
  bVar3 = iRam_? != 0;
  (this->fields).resampleMaterial = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).resampleMaterial >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pMVar2 = (this->fields).postProcessMaterial;
  if (pMVar2 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pMVar2,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
    pMVar2 = (this->fields).resampleMaterial;
    if (pMVar2 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)pMVar2,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PostProcessingManager);
      }
      pAVar8 = TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved;
      pDVar9 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
      FUN_?(pDVar9,this);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar8,pDVar9,(MethodInfo *)0x0);
      pAVar10 = TypeInfo__System__Action<bool>;
      if (pDVar9 == (Delegate *)0x0) {
        TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved =
             (Action_1_Boolean_ *)0x0;
      }
      else {
        pAVar8 = (Action_1_Boolean_ *)FUN_?(pDVar9,TypeInfo__System__Action<bool>);
        if (pAVar8 == (Action_1_Boolean_ *)0x0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved = pAVar8
        ;
        pAVar10 = TypeInfo__System__Action<bool>;
        lVar5 = FUN_?(pDVar9,TypeInfo__System__Action<bool>);
        if (lVar5 == 0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)
                        &TypeInfo__PostProcessingManager->static_fields->
                         OnPostProcessCameraCubeAddedRemoved >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* RenderTexture GetReSampledTexture(RenderTexture) */

RenderTexture *
Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_GetReSampledTexture
          (PostProcessingManager *this,RenderTexture *src,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (src != (RenderTexture *)0x0) {
    width = (*(src->klass->vtable).get_width.methodPtr)(src,(src->klass->vtable).get_width.method);
    height = (*(src->klass->vtable).get_height.methodPtr)(src);
    format = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_format
                       (src,(MethodInfo *)0x0);
    plVar1 = (longlong *)
             FUN_?(TypeInfo__UnityEngine__RenderTexture,(this->fields).resampleIterations);
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_4
                       (width,height,0,format,RenderTextureReadWrite__Enum_Default,1,
                        (MethodInfo *)0x0);
    if (plVar1 != (longlong *)0x0) {
      if ((pRVar2 != (RenderTexture *)0x0) &&
         (lVar3 = FUN_?(pRVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
        uVar4 = FUN_?();
        FUN_?(uVar4,0);
        pcVar5 = (code *)swi(3);
        pRVar2 = (RenderTexture *)(*pcVar5)();
        return pRVar2;
      }
      FUN_?(plVar1,0,pRVar2);
      pMVar6 = (this->fields).resampleMaterial;
      if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_1
                ((Texture *)src,pRVar2,pMVar6,0,(MethodInfo *)0x0);
      iVar7 = 1;
      dest = pRVar2;
      if (1 < (this->fields).resampleIterations) {
        do {
          width = width / 2;
          height = height / 2;
          dest = pRVar2;
          if ((width < 2) || (height < 2)) break;
          dest = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                 RenderTexture_GetTemporary_4
                           (width,height,0,format,RenderTextureReadWrite__Enum_Default,1,
                            (MethodInfo *)0x0);
          if ((dest != (RenderTexture *)0x0) &&
             (lVar3 = FUN_?(dest,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
            uVar4 = FUN_?();
            FUN_?(uVar4,0);
            pcVar5 = (code *)swi(3);
            pRVar2 = (RenderTexture *)(*pcVar5)();
            return pRVar2;
          }
          FUN_?(plVar1,(longlong)iVar7,dest);
          pMVar6 = (this->fields).resampleMaterial;
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_1
                    ((Texture *)pRVar2,dest,pMVar6,0,(MethodInfo *)0x0);
          iVar7 = iVar7 + 1;
          pRVar2 = dest;
        } while (iVar7 < (this->fields).resampleIterations);
      }
      uVar8 = iVar7 - 2;
      if (-1 < (int)uVar8) {
        lVar3 = (longlong)(int)uVar8;
        plVar9 = plVar1 + lVar3 + 4;
        pRVar2 = dest;
        do {
          if (*(uint *)(plVar1 + 3) <= uVar8) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            pRVar2 = (RenderTexture *)(*pcVar5)();
            return pRVar2;
          }
          dest = (RenderTexture *)*plVar9;
          pMVar6 = (this->fields).resampleMaterial;
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_1
                    ((Texture *)pRVar2,dest,pMVar6,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pvVar10 = (void *)0x0;
          if (pRVar2 != (RenderTexture *)0x0) {
            pvVar10 = (pRVar2->fields)._._.m_CachedPtr;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar5 = (code *)swi(3);
            pRVar2 = (RenderTexture *)(*pcVar5)();
            return pRVar2;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar10);
          uVar8 = uVar8 - 1;
          plVar9 = plVar9 + -1;
          lVar3 = lVar3 + -1;
          pRVar2 = dest;
        } while (-1 < lVar3);
      }
      return dest;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pRVar2 = (RenderTexture *)(*pcVar5)();
  return pRVar2;
}


/* Void HandlePostProcessCubeAddedRemoved(Boolean) */

void Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_HandlePostProcessCubeAddedRemoved
               (PostProcessingManager *this,bool cubeAddedRemoved,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ShortcutHandler__MethodInfo__UnityEngine__Object__FindObjectsByType<ShortcutHandler>_UnityEngine__FindObjectsSortMode_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsByType_2
                     (FindObjectsSortMode__Enum_None,
                      ShortcutHandler__MethodInfo__UnityEngine__Object__FindObjectsByType<ShortcutHandler>_UnityEngine__FindObjectsSortMode_____
                     );
  if (pOVar1 == (Object__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (uint)pOVar1->max_length;
  ppOVar4 = pOVar1->vector;
  pSVar5 = (ShortcutHandler *)0x0;
  while (uVar6 = (uint)pSVar5, pSVar5 = (ShortcutHandler *)0x0, (int)uVar6 < (int)uVar3) {
    if (uVar3 <= uVar6) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar5 = (ShortcutHandler *)*ppOVar4;
    if (pSVar5 == (ShortcutHandler *)0x0) goto code_?;
    if ((pSVar5->fields).kogamaControl == 0x34) break;
    ppOVar4 = ppOVar4 + 1;
    pSVar5 = (ShortcutHandler *)(ulonglong)(uVar6 + 1);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar5 != (ShortcutHandler *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((pSVar5->fields)._._._._.m_CachedPtr != (void *)0x0) && (cubeAddedRemoved == 0)) {
      ShortcutHandler::ShortcutHandler_UnRegisterShortcutKey(pSVar5,(MethodInfo *)0x0);
      return;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar5 != (ShortcutHandler *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar5->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__ShortcutHandler___RegisterShortcutKey_b__9_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pSVar5,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,(Object *)pSVar5,
                 MethodInfo__ShortcutHandler___RegisterShortcutKey_b__9_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar3 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Boolean Initialize(PostProcessingSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_Initialize
               (PostProcessingManager *this,PostProcessingSettings *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  pPVar1 = TypeInfo__PostProcessingManager->static_fields;
  uStack_2._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_2._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uVar3 = *(undefined3 *)&(data->colorSettings).field_0x1;
  iVar4 = (data->colorSettings).postExposure;
  iVar5 = (data->colorSettings).temperature;
  iVar6 = (data->colorSettings).saturation;
  uVar7 = *(undefined8 *)&(data->colorSettings).contrast;
  iVar8 = (data->bloomSettings).intensity;
  iVar9 = (data->bloomSettings).softKnee;
  (pPVar1->CurrentPostProcessingSettings).colorSettings.colors = (data->colorSettings).colors;
  *(undefined3 *)&(pPVar1->CurrentPostProcessingSettings).colorSettings.field_0x1 = uVar3;
  (pPVar1->CurrentPostProcessingSettings).colorSettings.postExposure = iVar4;
  (pPVar1->CurrentPostProcessingSettings).colorSettings.temperature = iVar5;
  (pPVar1->CurrentPostProcessingSettings).colorSettings.saturation = iVar6;
  iVar4 = (data->bloomSettings).diffusion;
  fVar10 = (data->bloomSettings).color.r;
  fVar11 = (data->bloomSettings).color.g;
  fVar12 = (data->bloomSettings).color.b;
  *(undefined8 *)&(pPVar1->CurrentPostProcessingSettings).colorSettings.contrast = uVar7;
  (pPVar1->CurrentPostProcessingSettings).bloomSettings.intensity = iVar8;
  (pPVar1->CurrentPostProcessingSettings).bloomSettings.softKnee = iVar9;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  iVar5 = (data->ambientOcclusionSettings).intensity;
  iVar6 = (data->ambientOcclusionSettings).thickness;
  (pPVar1->CurrentPostProcessingSettings).bloomSettings.diffusion = iVar4;
  (pPVar1->CurrentPostProcessingSettings).bloomSettings.color.r = fVar10;
  (pPVar1->CurrentPostProcessingSettings).bloomSettings.color.g = fVar11;
  (pPVar1->CurrentPostProcessingSettings).bloomSettings.color.b = fVar12;
  fVar10 = (data->ambientOcclusionSettings).color.r;
  fVar11 = (data->ambientOcclusionSettings).color.g;
  fVar12 = (data->ambientOcclusionSettings).color.b;
  fVar13 = (data->ambientOcclusionSettings).color.a;
  *(undefined8 *)&(pPVar1->CurrentPostProcessingSettings).bloomSettings.color.a = uVar7;
  (pPVar1->CurrentPostProcessingSettings).ambientOcclusionSettings.intensity = iVar5;
  (pPVar1->CurrentPostProcessingSettings).ambientOcclusionSettings.thickness = iVar6;
  bVar14 = (data->depthOfFieldSettings).depthOfField;
  uVar3 = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  iVar4 = (data->depthOfFieldSettings).focusDistance;
  iVar5 = (data->depthOfFieldSettings).aperture;
  iVar6 = (data->depthOfFieldSettings).focalLength;
  (pPVar1->CurrentPostProcessingSettings).ambientOcclusionSettings.color.r = fVar10;
  (pPVar1->CurrentPostProcessingSettings).ambientOcclusionSettings.color.g = fVar11;
  (pPVar1->CurrentPostProcessingSettings).ambientOcclusionSettings.color.b = fVar12;
  (pPVar1->CurrentPostProcessingSettings).ambientOcclusionSettings.color.a = fVar13;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  iVar8 = (data->vignetteSettings).intensity;
  iVar9 = (data->vignetteSettings).smoothness;
  (pPVar1->CurrentPostProcessingSettings).depthOfFieldSettings.depthOfField = bVar14;
  *(undefined3 *)&(pPVar1->CurrentPostProcessingSettings).depthOfFieldSettings.field_0x1 = uVar3;
  (pPVar1->CurrentPostProcessingSettings).depthOfFieldSettings.focusDistance = iVar4;
  (pPVar1->CurrentPostProcessingSettings).depthOfFieldSettings.aperture = iVar5;
  (pPVar1->CurrentPostProcessingSettings).depthOfFieldSettings.focalLength = iVar6;
  uVar15 = *(undefined8 *)&(data->vignetteSettings).color.a;
  bVar14 = (data->grainSettings).grain;
  uVar3 = *(undefined3 *)&(data->grainSettings).field_0x1;
  iVar4 = (data->grainSettings).intensity;
  *(undefined8 *)&(pPVar1->CurrentPostProcessingSettings).depthOfFieldSettings.maxBlurSize = uVar7
  ;
  (pPVar1->CurrentPostProcessingSettings).vignetteSettings.intensity = iVar8;
  (pPVar1->CurrentPostProcessingSettings).vignetteSettings.smoothness = iVar9;
  fVar10 = (data->vignetteSettings).color.r;
  fVar11 = (data->vignetteSettings).color.g;
  fVar12 = (data->vignetteSettings).color.b;
  (pPVar1->CurrentPostProcessingSettings).vignetteSettings.roundness =
       (data->vignetteSettings).roundness;
  (pPVar1->CurrentPostProcessingSettings).vignetteSettings.color.r = fVar10;
  (pPVar1->CurrentPostProcessingSettings).vignetteSettings.color.g = fVar11;
  (pPVar1->CurrentPostProcessingSettings).vignetteSettings.color.b = fVar12;
  iVar5 = (data->grainSettings).size;
  iVar6 = (data->grainSettings).luminanceContribution;
  bVar16 = (data->lensDistortionSettings).lensDistortion;
  uVar17 = *(undefined3 *)&(data->lensDistortionSettings).field_0x1;
  iVar8 = (data->lensDistortionSettings).intensity;
  *(undefined8 *)&(pPVar1->CurrentPostProcessingSettings).vignetteSettings.color.a = uVar15;
  (pPVar1->CurrentPostProcessingSettings).grainSettings.grain = bVar14;
  *(undefined3 *)&(pPVar1->CurrentPostProcessingSettings).grainSettings.field_0x1 = uVar3;
  (pPVar1->CurrentPostProcessingSettings).grainSettings.intensity = iVar4;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar19 = (data->bloomSettings).intensity;
  uVar20 = (data->bloomSettings).softKnee;
  (pPVar1->CurrentPostProcessingSettings).grainSettings.size = iVar5;
  (pPVar1->CurrentPostProcessingSettings).grainSettings.luminanceContribution = iVar6;
  (pPVar1->CurrentPostProcessingSettings).lensDistortionSettings.lensDistortion = bVar16;
  *(undefined3 *)&(pPVar1->CurrentPostProcessingSettings).lensDistortionSettings.field_0x1 = uVar17;
  (pPVar1->CurrentPostProcessingSettings).lensDistortionSettings.intensity = iVar8;
  (pPVar1->CurrentPostProcessingSettings).lensDistortionSettings.xMultiplier = (int32_t)uStack_2;
  (pPVar1->CurrentPostProcessingSettings).lensDistortionSettings.yMultiplier = uStack_2._4_4_;
  PStack_21._0_8_ = *(undefined8 *)&data->colorSettings;
  PStack_21.smoothness = (data->colorSettings).temperature;
  PStack_21.roundness = (data->colorSettings).saturation;
  uVar22 = (data->bloomSettings).diffusion;
  uVar23 = (data->bloomSettings).color.r;
  uVar24 = (data->bloomSettings).color.g;
  uVar25 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27._0_4_ = (data->ambientOcclusionSettings).color.r;
  pOStack_27._4_4_ = (data->ambientOcclusionSettings).color.g;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pOStack_31._0_1_ = (data->depthOfFieldSettings).depthOfField;
  pOStack_31._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  pOStack_31._4_4_ = (data->depthOfFieldSettings).focusDistance;
  uStack_32._0_4_ = (data->depthOfFieldSettings).aperture;
  uStack_32._4_4_ = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar33 = (data->vignetteSettings).intensity;
  uVar34 = (data->vignetteSettings).smoothness;
  uVar35 = (data->vignetteSettings).roundness;
  uVar36 = (data->vignetteSettings).color.r;
  uVar37 = (data->vignetteSettings).color.g;
  uVar38 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar7 = *(undefined8 *)&(data->vignetteSettings).color.a;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_43._0_1_ = (data->lensDistortionSettings).lensDistortion;
  pOStack_43._1_3_ = *(undefined3 *)&(data->lensDistortionSettings).field_0x1;
  pOStack_43._4_4_ = (data->lensDistortionSettings).intensity;
  fStack_44 = (float)uVar7;
  uStack_45 = (undefined4)((ulonglong)uVar7 >> 0x20);
  PStack_21.color.r = (float)uStack_18;
  pOStack_46 = (Object__Array *)PStack_21._0_8_;
  uStack_47 = PStack_21._8_8_;
  iStack_48 = uVar19;
  iStack_49 = uVar20;
  iStack_50 = uVar22;
  uStack_51 = uVar23;
  iStack_52 = uVar24;
  iStack_53 = uVar25;
  iStack_54 = uVar33;
  iStack_55 = uVar34;
  iStack_56 = uVar35;
  fStack_57 = (float)uVar36;
  fStack_58 = (float)uVar37;
  fStack_59 = (float)uVar38;
  bVar14 = PostProcessingManager_SetPostProcessingColorValues
                     (this,(PostProcessingColorSettings *)&PStack_21,(MethodInfo *)0x0);
  pOStack_46._0_1_ = (data->colorSettings).colors;
  pOStack_46._1_3_ = *(undefined3 *)&(data->colorSettings).field_0x1;
  pOStack_46._4_4_ = (data->colorSettings).postExposure;
  uStack_47._0_4_ = (data->colorSettings).temperature;
  uStack_47._4_4_ = (data->colorSettings).saturation;
  uStack_2._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_2._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar60 = (data->bloomSettings).intensity;
  uVar61 = (data->bloomSettings).softKnee;
  uVar62 = (data->bloomSettings).diffusion;
  uVar63 = (data->bloomSettings).color.r;
  uVar64 = (data->bloomSettings).color.g;
  uVar65 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27 = *(Object__Array **)&(data->ambientOcclusionSettings).color;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pOStack_31._0_1_ = (data->depthOfFieldSettings).depthOfField;
  pOStack_31._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  pOStack_31._4_4_ = (data->depthOfFieldSettings).focusDistance;
  uStack_32._0_4_ = (data->depthOfFieldSettings).aperture;
  uStack_32._4_4_ = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar66 = (data->vignetteSettings).intensity;
  uVar67 = (data->vignetteSettings).smoothness;
  uVar68 = (data->vignetteSettings).roundness;
  uVar69 = (data->vignetteSettings).color.r;
  uVar70 = (data->vignetteSettings).color.g;
  uVar71 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  fStack_44 = (data->vignetteSettings).color.a;
  uStack_45 = *(undefined4 *)&(data->vignetteSettings).rounded;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_43 = *(Object__Array **)&data->lensDistortionSettings;
  iStack_48 = uVar60;
  iStack_49 = uVar61;
  iStack_50 = uVar62;
  uStack_51 = uVar63;
  iStack_52 = uVar64;
  iStack_53 = uVar65;
  iStack_54 = uVar66;
  iStack_55 = uVar67;
  iStack_56 = uVar68;
  fStack_57 = (float)uVar69;
  fStack_58 = (float)uVar70;
  fStack_59 = (float)uVar71;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__BloomSoftKnee);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__BloomColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__BloomIntensity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar16 = uStack_18._4_1_;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_BLOOM,uStack_18._4_1_,(MethodInfo *)0x0
            );
  if (bVar16 != 0) {
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BloomIntensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar4,(float)iStack_48,(MethodInfo *)0x0);
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BloomSoftKnee,(MethodInfo *)0x0);
    iVar4 = iStack_50;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar5,(float)iStack_49 / _UNK_?,(MethodInfo *)0x0);
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    pOStack_73 = (Object__Array *)CONCAT44(iStack_52,uStack_51);
    uStack_74._4_4_ = iStack_29;
    uStack_74._0_4_ = iStack_53;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar72,StringLiteral__BloomColor,(Color *)&pOStack_73,(MethodInfo *)0x0);
    bVar14 = 1;
    (this->fields).resampleIterations = iVar4;
  }
  pOStack_46._0_1_ = (data->colorSettings).colors;
  pOStack_46._1_3_ = *(undefined3 *)&(data->colorSettings).field_0x1;
  pOStack_46._4_4_ = (data->colorSettings).postExposure;
  uStack_47._0_4_ = (data->colorSettings).temperature;
  uStack_47._4_4_ = (data->colorSettings).saturation;
  uStack_2._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_2._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar75 = (data->bloomSettings).intensity;
  uVar76 = (data->bloomSettings).softKnee;
  uVar77 = (data->bloomSettings).diffusion;
  uVar78 = (data->bloomSettings).color.r;
  uVar79 = (data->bloomSettings).color.g;
  uVar80 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27 = *(Object__Array **)&(data->ambientOcclusionSettings).color;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pOStack_31._0_1_ = (data->depthOfFieldSettings).depthOfField;
  pOStack_31._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  pOStack_31._4_4_ = (data->depthOfFieldSettings).focusDistance;
  uStack_32._0_4_ = (data->depthOfFieldSettings).aperture;
  uStack_32._4_4_ = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar81 = (data->vignetteSettings).intensity;
  uVar82 = (data->vignetteSettings).smoothness;
  uVar83 = (data->vignetteSettings).roundness;
  uVar84 = (data->vignetteSettings).color.r;
  uVar85 = (data->vignetteSettings).color.g;
  uVar86 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  fStack_44 = (data->vignetteSettings).color.a;
  uStack_45 = *(undefined4 *)&(data->vignetteSettings).rounded;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_43 = *(Object__Array **)&data->lensDistortionSettings;
  iStack_48 = uVar75;
  iStack_49 = uVar76;
  iStack_50 = uVar77;
  uStack_51 = uVar78;
  iStack_52 = uVar79;
  iStack_53 = uVar80;
  iStack_54 = uVar81;
  iStack_55 = uVar82;
  iStack_56 = uVar83;
  fStack_57 = (float)uVar84;
  fStack_58 = (float)uVar85;
  fStack_59 = (float)uVar86;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__AmbientOcclusionIntensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AmbientOcclusionColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AmbientOcclusionThickness);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar16 = (bool)uStack_30;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_AMBIENT_OCCLUSION,(bool)uStack_30,
             (MethodInfo *)0x0);
  if (bVar16 == 0) {
    bVar87 = 0;
  }
  else {
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__AmbientOcclusionIntensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar4,(float)(int)uStack_26 / _UNK_?,(MethodInfo *)0x0);
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__AmbientOcclusionThickness,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar4,(float)uStack_26._4_4_,(MethodInfo *)0x0);
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    pOStack_73 = pOStack_27;
    uStack_74._0_4_ = (int32_t)uStack_28;
    uStack_74._4_4_ = uStack_28._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar72,StringLiteral__AmbientOcclusionColor,(Color *)&pOStack_73,(MethodInfo *)0x0);
    bVar87 = 1;
  }
  pOStack_46._0_1_ = (data->colorSettings).colors;
  pOStack_46._1_3_ = *(undefined3 *)&(data->colorSettings).field_0x1;
  pOStack_46._4_4_ = (data->colorSettings).postExposure;
  uStack_47._0_4_ = (data->colorSettings).temperature;
  uStack_47._4_4_ = (data->colorSettings).saturation;
  uStack_2._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_2._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar88 = (data->bloomSettings).intensity;
  uVar89 = (data->bloomSettings).softKnee;
  uVar90 = (data->bloomSettings).diffusion;
  uVar91 = (data->bloomSettings).color.r;
  uVar92 = (data->bloomSettings).color.g;
  uVar93 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27._0_4_ = (data->ambientOcclusionSettings).color.r;
  pOStack_27._4_4_ = (data->ambientOcclusionSettings).color.g;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  PStack_21.vignette = (data->depthOfFieldSettings).depthOfField;
  PStack_21._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  PStack_21.intensity = (data->depthOfFieldSettings).focusDistance;
  PStack_21.smoothness = (data->depthOfFieldSettings).aperture;
  PStack_21.roundness = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar94 = (data->vignetteSettings).intensity;
  uVar95 = (data->vignetteSettings).smoothness;
  uVar96 = (data->vignetteSettings).roundness;
  uVar97 = (data->vignetteSettings).color.r;
  uVar98 = (data->vignetteSettings).color.g;
  uVar99 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar7 = *(undefined8 *)&(data->vignetteSettings).color.a;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_43._0_1_ = (data->lensDistortionSettings).lensDistortion;
  pOStack_43._1_3_ = *(undefined3 *)&(data->lensDistortionSettings).field_0x1;
  pOStack_43._4_4_ = (data->lensDistortionSettings).intensity;
  fStack_44 = (float)uVar7;
  uStack_45 = (undefined4)((ulonglong)uVar7 >> 0x20);
  PStack_21.color.r = fStack_39;
  iStack_48 = uVar88;
  iStack_49 = uVar89;
  iStack_50 = uVar90;
  uStack_51 = uVar91;
  iStack_52 = uVar92;
  iStack_53 = uVar93;
  pOStack_31 = (Object__Array *)PStack_21._0_8_;
  uStack_32 = PStack_21._8_8_;
  iStack_54 = uVar94;
  iStack_55 = uVar95;
  iStack_56 = uVar96;
  fStack_57 = (float)uVar97;
  fStack_58 = (float)uVar98;
  fStack_59 = (float)uVar99;
  bVar16 = PostProcessingManager_SetPostProcessingDepthOfFieldValues
                     (this,(PostProcessingDepthOfFieldSettings *)&PStack_21,(MethodInfo *)0x0);
  pOStack_46._0_1_ = (data->colorSettings).colors;
  pOStack_46._1_3_ = *(undefined3 *)&(data->colorSettings).field_0x1;
  pOStack_46._4_4_ = (data->colorSettings).postExposure;
  uStack_47._0_4_ = (data->colorSettings).temperature;
  uStack_47._4_4_ = (data->colorSettings).saturation;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar100 = (data->bloomSettings).intensity;
  uVar101 = (data->bloomSettings).softKnee;
  uStack_2._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_2._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uVar102 = (data->bloomSettings).diffusion;
  uVar103 = (data->bloomSettings).color.r;
  uVar104 = (data->bloomSettings).color.g;
  uVar105 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27._0_4_ = (data->ambientOcclusionSettings).color.r;
  pOStack_27._4_4_ = (data->ambientOcclusionSettings).color.g;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pOStack_31._0_1_ = (data->depthOfFieldSettings).depthOfField;
  pOStack_31._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  pOStack_31._4_4_ = (data->depthOfFieldSettings).focusDistance;
  uStack_32._0_4_ = (data->depthOfFieldSettings).aperture;
  uStack_32._4_4_ = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar106 = (data->vignetteSettings).intensity;
  uVar107 = (data->vignetteSettings).smoothness;
  uVar108 = (data->vignetteSettings).roundness;
  uVar109 = (data->vignetteSettings).color.r;
  uVar110 = (data->vignetteSettings).color.g;
  uVar111 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar7 = *(undefined8 *)&(data->vignetteSettings).color.a;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_43._0_1_ = (data->lensDistortionSettings).lensDistortion;
  pOStack_43._1_3_ = *(undefined3 *)&(data->lensDistortionSettings).field_0x1;
  pOStack_43._4_4_ = (data->lensDistortionSettings).intensity;
  fStack_44 = (float)uVar7;
  uStack_45 = (undefined4)((ulonglong)uVar7 >> 0x20);
  PStack_21._0_8_ = CONCAT44(uVar106,uStack_40);
  PStack_21.roundness = uVar108;
  PStack_21.smoothness = uVar107;
  PStack_21.color.g = (float)uVar110;
  PStack_21.color.r = (float)uVar109;
  PStack_21.color.a = fStack_44;
  PStack_21.color.b = (float)uVar111;
  PStack_21.rounded = (bool)uStack_45;
  PStack_21._33_3_ = uStack_45._1_3_;
  iStack_48 = uVar100;
  iStack_49 = uVar101;
  iStack_50 = uVar102;
  uStack_51 = uVar103;
  iStack_52 = uVar104;
  iStack_53 = uVar105;
  iStack_54 = uVar106;
  iStack_55 = uVar107;
  iStack_56 = uVar108;
  fStack_57 = (float)uVar109;
  fStack_58 = (float)uVar110;
  fStack_59 = (float)uVar111;
  bVar112 = PostProcessingManager_SetPostProcessingVignetteValues(this,&PStack_21,(MethodInfo *)0x0)
  ;
  pOStack_46._0_1_ = (data->colorSettings).colors;
  pOStack_46._1_3_ = *(undefined3 *)&(data->colorSettings).field_0x1;
  pOStack_46._4_4_ = (data->colorSettings).postExposure;
  uStack_47._0_4_ = (data->colorSettings).temperature;
  uStack_47._4_4_ = (data->colorSettings).saturation;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar113 = (data->bloomSettings).intensity;
  uVar114 = (data->bloomSettings).softKnee;
  bVar87 = bVar112 | bVar16 | bVar87 | bVar14;
  uVar115 = (data->bloomSettings).diffusion;
  uVar116 = (data->bloomSettings).color.r;
  uVar117 = (data->bloomSettings).color.g;
  uVar118 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27 = *(Object__Array **)&(data->ambientOcclusionSettings).color;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pOStack_31._0_1_ = (data->depthOfFieldSettings).depthOfField;
  pOStack_31._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  pOStack_31._4_4_ = (data->depthOfFieldSettings).focusDistance;
  uStack_32._0_4_ = (data->depthOfFieldSettings).aperture;
  uStack_32._4_4_ = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar119 = (data->vignetteSettings).intensity;
  uVar120 = (data->vignetteSettings).smoothness;
  uStack_2._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_2._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uVar121 = (data->vignetteSettings).roundness;
  uVar122 = (data->vignetteSettings).color.r;
  uVar123 = (data->vignetteSettings).color.g;
  uVar124 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  fStack_44 = (data->vignetteSettings).color.a;
  uStack_45 = *(undefined4 *)&(data->vignetteSettings).rounded;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_43 = *(Object__Array **)&data->lensDistortionSettings;
  iStack_48 = uVar113;
  iStack_49 = uVar114;
  iStack_50 = uVar115;
  uStack_51 = uVar116;
  iStack_52 = uVar117;
  iStack_53 = uVar118;
  iStack_54 = uVar119;
  iStack_55 = uVar120;
  iStack_56 = uVar121;
  fStack_57 = (float)uVar122;
  fStack_58 = (float)uVar123;
  fStack_59 = (float)uVar124;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__GrainSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GrainIntensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GrainLuminance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar14 = (bool)uStack_41;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_GRAIN,(bool)uStack_41,(MethodInfo *)0x0
            );
  if (bVar14 != 0) {
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__GrainIntensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar4,(float)uStack_41._4_4_ / _UNK_?,(MethodInfo *)0x0);
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__GrainSize,(MethodInfo *)0x0);
    fVar10 = (float)(int)uStack_42 / _UNK_?;
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_?(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar4,fVar10,(MethodInfo *)0x0);
    pMVar72 = (this->fields).postProcessMaterial;
    if (pMVar72 == (Material *)0x0) goto code_?;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__GrainLuminance,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar72,iVar4,(float)uStack_42._4_4_ / _UNK_?,(MethodInfo *)0x0);
    bVar87 = 1;
  }
  pOStack_46._0_1_ = (data->colorSettings).colors;
  pOStack_46._1_3_ = *(undefined3 *)&(data->colorSettings).field_0x1;
  pOStack_46._4_4_ = (data->colorSettings).postExposure;
  uStack_47._0_4_ = (data->colorSettings).temperature;
  uStack_47._4_4_ = (data->colorSettings).saturation;
  uStack_74._0_4_ = (data->lensDistortionSettings).xMultiplier;
  uStack_74._4_4_ = (data->lensDistortionSettings).yMultiplier;
  uStack_18 = *(undefined8 *)&(data->colorSettings).contrast;
  uVar125 = (data->bloomSettings).intensity;
  uVar126 = (data->bloomSettings).softKnee;
  uVar127 = (data->bloomSettings).diffusion;
  uVar128 = (data->bloomSettings).color.r;
  uVar129 = (data->bloomSettings).color.g;
  uVar130 = (data->bloomSettings).color.b;
  uVar7 = *(undefined8 *)&(data->bloomSettings).color.a;
  uStack_26._0_4_ = (data->ambientOcclusionSettings).intensity;
  uStack_26._4_4_ = (data->ambientOcclusionSettings).thickness;
  pOStack_27 = *(Object__Array **)&(data->ambientOcclusionSettings).color;
  uStack_28._0_4_ = (int32_t)(data->ambientOcclusionSettings).color.b;
  uStack_28._4_4_ = (int32_t)(data->ambientOcclusionSettings).color.a;
  iStack_29 = (int32_t)uVar7;
  uStack_30 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pOStack_31._0_1_ = (data->depthOfFieldSettings).depthOfField;
  pOStack_31._1_3_ = *(undefined3 *)&(data->depthOfFieldSettings).field_0x1;
  pOStack_31._4_4_ = (data->depthOfFieldSettings).focusDistance;
  uStack_32._0_4_ = (data->depthOfFieldSettings).aperture;
  uStack_32._4_4_ = (data->depthOfFieldSettings).focalLength;
  uVar7 = *(undefined8 *)&(data->depthOfFieldSettings).maxBlurSize;
  uVar131 = (data->vignetteSettings).intensity;
  uVar132 = (data->vignetteSettings).smoothness;
  uVar133 = (data->vignetteSettings).roundness;
  uVar134 = (data->vignetteSettings).color.r;
  uVar135 = (data->vignetteSettings).color.g;
  uVar136 = (data->vignetteSettings).color.b;
  fStack_39 = (float)uVar7;
  uStack_40 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar7 = *(undefined8 *)&(data->vignetteSettings).color.a;
  uStack_41._0_1_ = (data->grainSettings).grain;
  uStack_41._1_3_ = *(undefined3 *)&(data->grainSettings).field_0x1;
  uStack_41._4_4_ = (data->grainSettings).intensity;
  uStack_42._0_4_ = (data->grainSettings).size;
  uStack_42._4_4_ = (data->grainSettings).luminanceContribution;
  pOStack_73 = *(Object__Array **)&data->lensDistortionSettings;
  fStack_44 = (float)uVar7;
  uStack_45 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iStack_48 = uVar125;
  iStack_49 = uVar126;
  iStack_50 = uVar127;
  uStack_51 = uVar128;
  iStack_52 = uVar129;
  iStack_53 = uVar130;
  iStack_54 = uVar131;
  iStack_55 = uVar132;
  iStack_56 = uVar133;
  fStack_57 = (float)uVar134;
  fStack_58 = (float)uVar135;
  fStack_59 = (float)uVar136;
  pOStack_43 = pOStack_73;
  uStack_2 = uStack_74;
  bVar14 = PostProcessingManager_SetPostProcessingLensDistortionValues
                     (this,(PostProcessingLensDistortionSettings *)&pOStack_73,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).activeEffectsStrings;
  bVar87 = bVar14 | bVar87;
  pMVar72 = (this->fields).postProcessMaterial;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             TypeConverterRegistry+ConverterKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>__get_Values__
                       );
    pMVar137 = 
    System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
    ;
    if ((
        System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__String__MethodInfo__System__Linq__Enumerable__ToArray<System::String>_System__Collections__Generic__IEnumerable<System::String>_____
                   );
    }
    if (source == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar138 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar138,pMVar137);
      pcVar139 = (code *)swi(3);
      bVar14 = (*pcVar139)();
      return bVar14;
    }
    pOStack_73 = (Object__Array *)0x0;
    uStack_74._0_4_ = 0;
    uStack_74._4_4_ = 0;
    System.Core.dll::System::Linq::Buffer`1[System::Object]::Buffer_1_System_Object___ctor
              ((Buffer_1_System_Object_ *)&pOStack_73,(IEnumerable_1_System_Object_ *)source,
               (pMVar137->field7_0x38).rgctx_data[2].method);
    PStack_21._0_8_ = pOStack_73;
    PStack_21.smoothness = (int32_t)uStack_74;
    PStack_21.roundness = uStack_74._4_4_;
    value = (String__Array *)
            FUN_?(&PStack_21,(pMVar137->field7_0x38).rgctx_data[3].rgctxDataDummy);
    if (pMVar72 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shaderKeywords
                (pMVar72,value,(MethodInfo *)0x0);
      if (bVar87 != TypeInfo__PostProcessingManager->static_fields->hasGamePostProcessEffects) {
        if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        PostProcessingManager_set_IsPostProcessEffectsEnabled(bVar87,(MethodInfo *)0x0);
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (this_01 != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar140 = (this_01->fields)._._._.m_CachedPtr;
        if (pvVar140 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
          pcVar139 = (code *)swi(3);
          bVar14 = (*pcVar139)();
          return bVar14;
        }
        pcVar139 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar139 = (code *)FUN_?(&UNK_?), pcVar139 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar139 = (code *)swi(3);
          bVar14 = (*pcVar139)();
          return bVar14;
        }
        pcRam_? = pcVar139;
        DVar141 = (*pcRam_?)(pvVar140);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                  (this_01,DVar141 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
        return bVar87;
      }
    }
  }
code_?:
  FUN_?();
  pcVar139 = (code *)swi(3);
  bVar14 = (*pcVar139)();
  return bVar14;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_OnDestroy
               (PostProcessingManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PostProcessingManager__HandlePostProcessCubeAddedRemoved_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  pAVar1 = TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<bool>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved =
         (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_Boolean_ *)FUN_?(pDVar2,TypeInfo__System__Action<bool>);
    if (pAVar1 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved = pAVar1;
    pAVar3 = TypeInfo__System__Action<bool>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<bool>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   &TypeInfo__PostProcessingManager->static_fields->
                    OnPostProcessCameraCubeAddedRemoved >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnRenderImage(RenderTexture, RenderTexture) */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_OnRenderImage
               (PostProcessingManager *this,RenderTexture *src,RenderTexture *dst,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ResampledTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = (void *)0x0;
  PStack_2.currentSrc = (RenderTexture *)0x0;
  PStack_2.currentDst = (RenderTexture *)0x0;
  PStack_2.rtA = (RenderTexture *)0x0;
  PStack_2.rtB = (RenderTexture *)0x0;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&PStack_2.__4__this >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  PStack_2.__4__this = this;
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  if (TypeInfo__PostProcessingManager->static_fields->isPostProcessEffectsEnabled == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit
              ((Texture *)src,dst,(MethodInfo *)0x0);
    return;
  }
  if (src != (RenderTexture *)0x0) {
    iVar8 = (*(src->klass->vtable).get_width.methodPtr)(src,(src->klass->vtable).get_width.method);
    if ((iVar8 != (this->fields).storedTextureResolution.m_X) ||
       (iVar8 = (*(src->klass->vtable).get_height.methodPtr)
                          (src,(src->klass->vtable).get_height.method),
       iVar8 != (this->fields).storedTextureResolution.m_Y)) {
      iVar9 = (*(src->klass->vtable).get_width.methodPtr)(src,(src->klass->vtable).get_width.method)
      ;
      iVar10 = (*(src->klass->vtable).get_height.methodPtr)
                        (src,(src->klass->vtable).get_height.method);
      VVar11.m_Y = iVar10;
      VVar11.m_X = iVar9;
      (this->fields).storedTextureResolution = VVar11;
      if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PostProcessingManager);
      }
      pPVar12 = TypeInfo__PostProcessingManager->static_fields;
      PStack_13.vignette = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.vignette;
      PStack_13._1_3_ =
           *(undefined3 *)&(pPVar12->CurrentPostProcessingSettings).vignetteSettings.field_0x1;
      PStack_13.intensity = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.intensity;
      PStack_13.smoothness = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.smoothness;
      PStack_13.roundness = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.roundness;
      PStack_13.color.r = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.color.r;
      PStack_13.color.g = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.color.g;
      PStack_13.color.b = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.color.b;
      PStack_13.color.a = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.color.a;
      PStack_13.rounded = (pPVar12->CurrentPostProcessingSettings).vignetteSettings.rounded;
      PStack_13._33_3_ =
           *(undefined3 *)&(pPVar12->CurrentPostProcessingSettings).vignetteSettings.field_0x21;
      PostProcessingManager_SetPostProcessingVignetteValues(this,&PStack_13,(MethodInfo *)0x0);
    }
    iVar9 = (*(src->klass->vtable).get_width.methodPtr)(src,(src->klass->vtable).get_width.method);
    iVar10 = (*(src->klass->vtable).get_height.methodPtr)(src);
    RVar14 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_format
                       (src,(MethodInfo *)0x0);
    PStack_2.rtA =
         UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_4
                   (iVar9,iVar10,0,RVar14,RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&PStack_2.rtA >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    iVar9 = (*(src->klass->vtable).get_width.methodPtr)(src,(src->klass->vtable).get_width.method);
    iVar10 = (*(src->klass->vtable).get_height.methodPtr)(src);
    RVar14 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_format
                       (src,(MethodInfo *)0x0);
    PStack_2.rtB =
         UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_4
                   (iVar9,iVar10,0,RVar14,RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&PStack_2.rtB >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&PStack_2 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    PStack_2.currentDst = PStack_2.rtA;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&PStack_2.currentDst >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pDVar15 = (Dictionary_2_System_Int32Enum_System_Single_ *)(this->fields).activePasses;
    PStack_2.currentSrc = src;
    if (pDVar15 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
      iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                        (pDVar15,0,MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                                  ->klass->rgctx_data[0x21].method);
      if (-1 < iVar9) {
        PostProcessingManager__OnRenderImage_g__RunPassThenSwitchTextures_26_0
                  (this,PostProcessingManager_Pass__Enum_AO_DOF,&PStack_2,(MethodInfo *)0x0);
      }
      pDVar15 = (Dictionary_2_System_Int32Enum_System_Single_ *)(this->fields).activePasses;
      if (pDVar15 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
        iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                          (pDVar15,1,MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                                    ->klass->rgctx_data[0x21].method);
        if (-1 < iVar9) {
          pRVar16 = PostProcessingManager_GetReSampledTexture(this,src,(MethodInfo *)0x0);
          this_00 = (this->fields).postProcessMaterial;
          if (this_00 == (Material *)0x0) goto code_?;
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__ResampledTex,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                    (this_00,iVar9,(Texture *)pRVar16,(MethodInfo *)0x0);
          PostProcessingManager__OnRenderImage_g__RunPassThenSwitchTextures_26_0
                    (this,PostProcessingManager_Pass__Enum_BLOOM,&PStack_2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
                    (pRVar16,(MethodInfo *)0x0);
        }
        pDVar15 = (Dictionary_2_System_Int32Enum_System_Single_ *)(this->fields).activePasses;
        if (pDVar15 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
          iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                            (pDVar15,2,MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                                      ->klass->rgctx_data[0x21].method);
          if (-1 < iVar9) {
            PostProcessingManager__OnRenderImage_g__RunPassThenSwitchTextures_26_0
                      (this,PostProcessingManager_Pass__Enum_COLOR_VIGNETTE_GRAIN,&PStack_2,
                       (MethodInfo *)0x0);
          }
          pDVar15 = (Dictionary_2_System_Int32Enum_System_Single_ *)(this->fields).activePasses;
          if (pDVar15 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
            iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__FindEntry
                              (pDVar15,3,MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                                        ->klass->rgctx_data[0x21].method);
            if (-1 < iVar9) {
              PostProcessingManager__OnRenderImage_g__RunPassThenSwitchTextures_26_0
                        (this,PostProcessingManager_Pass__Enum_LENS_DISTORTION,&PStack_2,
                         (MethodInfo *)0x0);
            }
            pRVar16 = PStack_2.currentSrc;
            if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit
                      ((Texture *)pRVar16,dst,(MethodInfo *)0x0);
            pRVar16 = PStack_2.rtA;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((
                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?();
            }
            pvVar17 = pvVar1;
            if (pRVar16 != (RenderTexture *)0x0) {
              pvVar17 = (pRVar16->fields)._._.m_CachedPtr;
            }
            pcVar18 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcRam_? = pcVar18;
            (*pcRam_?)(pvVar17);
            pRVar16 = PStack_2.rtB;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((
                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?();
            }
            if (pRVar16 != (RenderTexture *)0x0) {
              pvVar1 = (pRVar16->fields)._._.m_CachedPtr;
            }
            pcVar18 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcRam_? = pcVar18;
            (*pcRam_?)(pvVar1);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SetEffectActiveState(PostProcessingManager+PostProcessKey, Boolean) */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_SetEffectActiveState
               (PostProcessingManager *this,PostProcessingManager_PostProcessKey__Enum key,
               bool isActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__Add_PostProcessingManager__Pass__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__Remove_PostProcessingManager__Pass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__get_Item_PostProcessingManager__Pass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__get_Item_PostProcessingManager__PostProcessKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>__set_Item_PostProcessingManager__PostProcessKey__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__set_Item_PostProcessingManager__Pass__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Add_PostProcessingManager__PostProcessKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Contains_PostProcessingManager__PostProcessKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Remove_PostProcessingManager__PostProcessKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__PostProcessingManager__PostProcessKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager__PostProcessKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ON);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__OFF);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__PostProcessingManager__PostProcessKey;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar1,1);
    plVar2 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  aPStackX_10[0] = key;
  uVar4 = FUN_?(TypeInfo__PostProcessingManager__PostProcessKey,aPStackX_10);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_03 = (ArgumentNullException *)func_?(uVar4);
    pSVar5 = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_03,pSVar5,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Enum__GetName_System__Type__System__Object_);
    FUN_?(this_03,uVar4);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  str0 = (String *)(**(code **)(*plVar2 + 0x248))(plVar2,uVar4);
  pSVar5 = StringLiteral__OFF;
  if (isActive != 0) {
    pSVar5 = StringLiteral__ON;
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar5,(MethodInfo *)0x0);
  this_00 = (this->fields).activeEffectsStrings;
  if (this_00 != (Dictionary_2_PostProcessingManager_PostProcessKey_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)pSVar5,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>__set_Item_PostProcessingManager__PostProcessKey__System__String_
               ->klass->rgctx_data[0x22].method);
    pHVar7 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeEffects;
    if (pHVar7 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (pHVar7,key,
                         MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Contains_PostProcessingManager__PostProcessKey_
                        );
      pHVar7 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeEffects;
      if (pHVar7 != (HashSet_1_System_Int32Enum_ *)0x0) {
        if (((bVar8 ^ 1) & isActive) == 0) {
          bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                  HashSet_1_System_Int32Enum__Contains
                            (pHVar7,key,
                             MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Contains_PostProcessingManager__PostProcessKey_
                            );
          if (bVar8 == 0) {
            return;
          }
          if (isActive != 0) {
            return;
          }
          this_01 = (HashSet_1_System_Int32Enum_ *)(this->fields).activeEffects;
          if (this_01 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
          HashSet_1_System_Int32Enum__Remove
                    (this_01,key,
                     MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Remove_PostProcessingManager__PostProcessKey_
                    );
        }
        else {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
          HashSet_1_System_Int32Enum__AddIfNotPresent
                    (pHVar7,key,
                     MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__Add_PostProcessingManager__PostProcessKey_
                     ->klass->rgctx_data[0x15].method);
        }
        if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PostProcessingManager);
        }
        this_02 = TypeInfo__PostProcessingManager->static_fields->PostProcessKeyToPassMap;
        if (this_02 !=
            (Dictionary_2_PostProcessingManager_PostProcessKey_PostProcessingManager_Pass_ *)0x0) {
          key_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_02,key,
                              MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__get_Item_PostProcessingManager__PostProcessKey_
                             );
          pDVar9 = (Dictionary_2_System_Int32Enum_System_Single_ *)(this->fields).activePasses;
          if (pDVar9 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
            iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__FindEntry
                              (pDVar9,key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__ContainsKey_PostProcessingManager__Pass_
                               ->klass->rgctx_data[0x21].method);
            if (iVar10 < 0) {
              if (isActive == 0) {
                return;
              }
              pDVar11 = (this->fields).activePasses;
              if (pDVar11 != (Dictionary_2_PostProcessingManager_Pass_System_Int32_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Int32]::Dictionary_2_System_Int32Enum_System_Int32__TryInsert
                          ((Dictionary_2_System_Int32Enum_System_Int32_ *)pDVar11,key_00,1,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pHVar7 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__Add_PostProcessingManager__Pass__int_
                           ->klass->rgctx_data[0x22].method);
                return;
              }
            }
            else {
              pDVar11 = (this->fields).activePasses;
              if (pDVar11 != (Dictionary_2_PostProcessingManager_Pass_System_Int32_ *)0x0) {
                IVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Int32Enum]::
                        Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar11,key_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__get_Item_PostProcessingManager__Pass_
                                  );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Int32]::Dictionary_2_System_Int32Enum_System_Int32__TryInsert
                          ((Dictionary_2_System_Int32Enum_System_Int32_ *)pDVar11,key_00,
                           (uint)isActive * 2 + -1 + IVar12,
                           (InsertionBehavior__Enum)CONCAT71((uint7)(uint3)(IVar12 >> 8),1),
                           MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__set_Item_PostProcessingManager__Pass__int_
                           ->klass->rgctx_data[0x22].method);
                pDVar11 = (this->fields).activePasses;
                if (pDVar11 != (Dictionary_2_PostProcessingManager_Pass_System_Int32_ *)0x0) {
                  IVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Int32Enum]::
                          Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar11,
                                     key_00,
                                     MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__get_Item_PostProcessingManager__Pass_
                                    );
                  if ((int)IVar12 < 1) {
                    pDVar9 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                             (this->fields).activePasses;
                    if (pDVar9 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)
                    goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::Dictionary_2_System_Int32Enum_System_Single__Remove
                              (pDVar9,key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__Remove_PostProcessingManager__Pass_
                              );
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean SetPostProcessingAmbientOcclusionValues(PostProcessingAmbientOcclusionSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_SetPostProcessingAmbientOcclusionValues
               (PostProcessingManager *this,PostProcessingAmbientOcclusionSettings *aoSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__AmbientOcclusionIntensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AmbientOcclusionColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AmbientOcclusionThickness);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (aoSettings->color).g;
  uVar2 = (aoSettings->color).b;
  fStack_3 = (aoSettings->color).a;
  uVar4 = *(undefined4 *)aoSettings;
  uStack_5 = uVar1;
  fStack_6 = (float)uVar2;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_AMBIENT_OCCLUSION,(bool)uVar4,
             (MethodInfo *)0x0);
  if ((bool)uVar4 != 0) {
    pMVar7 = (this->fields).postProcessMaterial;
    uVar8 = (aoSettings->color).g;
    uVar9 = (aoSettings->color).b;
    fStack_3 = (aoSettings->color).a;
    iVar10 = aoSettings->intensity;
    uVar11 = CStack_12._0_8_;
    fVar13 = CStack_12.a;
    uStack_5 = uVar8;
    fStack_6 = (float)uVar9;
    if (pMVar7 != (Material *)0x0) {
      iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                         (StringLiteral__AmbientOcclusionIntensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar7,iVar14,(float)iVar10 / _UNK_?,(MethodInfo *)0x0);
      pMVar7 = (this->fields).postProcessMaterial;
      uVar15 = (aoSettings->color).g;
      uVar16 = (aoSettings->color).b;
      fStack_3 = (aoSettings->color).a;
      iVar10 = aoSettings->thickness;
      uVar11 = CStack_12._0_8_;
      fVar13 = CStack_12.a;
      uStack_5 = uVar15;
      fStack_6 = (float)uVar16;
      if (pMVar7 != (Material *)0x0) {
        iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                           (StringLiteral__AmbientOcclusionThickness,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar7,iVar14,(float)iVar10,(MethodInfo *)0x0);
        CStack_12.b = (float)aoSettings->thickness;
        pCVar17 = &aoSettings->color;
        pMVar7 = (this->fields).postProcessMaterial;
        uVar18 = (aoSettings->color).g;
        uVar19 = (aoSettings->color).b;
        CStack_12.r = pCVar17->r;
        CStack_12.g = pCVar17->g;
        CStack_12.a = (aoSettings->color).a;
        uVar11 = *(undefined8 *)aoSettings;
        fVar13 = pCVar17->r;
        uStack_5 = uVar18;
        fStack_6 = (float)uVar19;
        fStack_3 = CStack_12.a;
        if (pMVar7 != (Material *)0x0) {
          CStack_12.b = (float)uVar19;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar7,StringLiteral__AmbientOcclusionColor,&CStack_12,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
    CStack_12.a = fVar13;
    CStack_12._0_8_ = uVar11;
    FUN_?();
    pcVar20 = (code *)swi(3);
    bVar21 = (*pcVar20)();
    return bVar21;
  }
  return 0;
}


/* Boolean SetPostProcessingBloomValues(PostProcessingBloomSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_SetPostProcessingBloomValues
               (PostProcessingManager *this,PostProcessingBloomSettings *bloomSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__BloomSoftKnee);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__BloomColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__BloomIntensity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (bloomSettings->color).r;
  uStack_1._4_4_ = (bloomSettings->color).g;
  uStack_2._0_4_ = (bloomSettings->color).b;
  uStack_2._4_4_ = (bloomSettings->color).a;
  uVar3 = *(undefined4 *)bloomSettings;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_BLOOM,(bool)uVar3,(MethodInfo *)0x0);
  if ((bool)uVar3 != 0) {
    uStack_1._0_4_ = (bloomSettings->color).r;
    uStack_1._4_4_ = (bloomSettings->color).g;
    uStack_2._0_4_ = (bloomSettings->color).b;
    uStack_2._4_4_ = (bloomSettings->color).a;
    pMVar4 = (this->fields).postProcessMaterial;
    iVar5 = bloomSettings->intensity;
    uVar6 = CStack_7._0_8_;
    uVar8 = CStack_7._8_8_;
    if (pMVar4 != (Material *)0x0) {
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BloomIntensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar4,iVar9,(float)iVar5,(MethodInfo *)0x0);
      uStack_1._0_4_ = (bloomSettings->color).r;
      uStack_1._4_4_ = (bloomSettings->color).g;
      uStack_2._0_4_ = (bloomSettings->color).b;
      uStack_2._4_4_ = (bloomSettings->color).a;
      pMVar4 = (this->fields).postProcessMaterial;
      iVar5 = bloomSettings->softKnee;
      uVar6 = CStack_7._0_8_;
      uVar8 = CStack_7._8_8_;
      if (pMVar4 != (Material *)0x0) {
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__BloomSoftKnee,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar4,iVar9,(float)iVar5 / _UNK_?,(MethodInfo *)0x0);
        uVar8._0_4_ = (float)bloomSettings->softKnee;
        uVar8._4_4_ = (float)bloomSettings->diffusion;
        pMVar4 = (this->fields).postProcessMaterial;
        CStack_7.r = (bloomSettings->color).r;
        CStack_7.g = (bloomSettings->color).g;
        CStack_7.b = (bloomSettings->color).b;
        CStack_7.a = (bloomSettings->color).a;
        uVar6 = *(undefined8 *)bloomSettings;
        if (pMVar4 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar4,StringLiteral__BloomColor,&CStack_7,(MethodInfo *)0x0);
          uVar10 = bloomSettings->diffusion;
          (this->fields).resampleIterations = uVar10;
          return 1;
        }
      }
    }
    CStack_7._8_8_ = uVar8;
    CStack_7._0_8_ = uVar6;
    FUN_?();
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  return 0;
}


/* Boolean SetPostProcessingColorValues(PostProcessingColorSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_SetPostProcessingColorValues
               (PostProcessingManager *this,PostProcessingColorSettings *colorSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__Temperature);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Contrast);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Saturation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__PostExposure);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = *(undefined4 *)colorSettings;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_COLORS,(bool)uVar1,(MethodInfo *)0x0);
  if ((bool)uVar1 != 0) {
    pMVar2 = (this->fields).postProcessMaterial;
    iVar3 = colorSettings->postExposure;
    if (pMVar2 != (Material *)0x0) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__PostExposure,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar2,iVar4,(float)iVar3 / _UNK_?,(MethodInfo *)0x0);
      pMVar2 = (this->fields).postProcessMaterial;
      iVar3 = colorSettings->temperature;
      if (pMVar2 != (Material *)0x0) {
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__Temperature,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar2,iVar4,(float)iVar3 / _UNK_? + _UNK_?,(MethodInfo *)0x0);
        pMVar2 = (this->fields).postProcessMaterial;
        iVar3 = colorSettings->saturation;
        if (pMVar2 != (Material *)0x0) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__Saturation,(MethodInfo *)0x0);
          fVar5 = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (pMVar2,iVar4,(float)iVar3 / _UNK_? + _UNK_?,(MethodInfo *)0x0);
          pMVar2 = (this->fields).postProcessMaterial;
          if (pMVar2 != (Material *)0x0) {
            iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              (StringLiteral__Contrast,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                      (pMVar2,iVar4,(float)colorSettings->contrast / fVar5 + _UNK_?,
                       (MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  return 0;
}


/* Boolean SetPostProcessingDepthOfFieldValues(PostProcessingDepthOfFieldSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_SetPostProcessingDepthOfFieldValues
               (PostProcessingManager *this,PostProcessingDepthOfFieldSettings *dofSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MaxBlurSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FocalLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Aperature);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FocusDistance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = *(undefined4 *)dofSettings;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_DOF,(bool)uVar1,(MethodInfo *)0x0);
  if ((bool)uVar1 != 0) {
    pMVar2 = (this->fields).postProcessMaterial;
    iVar3 = dofSettings->focusDistance;
    if (pMVar2 != (Material *)0x0) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__FocusDistance,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar2,iVar4,(float)iVar3 / _UNK_?,(MethodInfo *)0x0);
      pMVar2 = (this->fields).postProcessMaterial;
      iVar3 = dofSettings->aperture;
      if (pMVar2 != (Material *)0x0) {
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__Aperature,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar2,iVar4,(float)iVar3 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        pMVar2 = (this->fields).postProcessMaterial;
        iVar3 = dofSettings->focalLength;
        if (pMVar2 != (Material *)0x0) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__FocalLength,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (pMVar2,iVar4,(float)iVar3,(MethodInfo *)0x0);
          pMVar2 = (this->fields).postProcessMaterial;
          if (pMVar2 != (Material *)0x0) {
            iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              (StringLiteral__MaxBlurSize,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                      (pMVar2,iVar4,(float)dofSettings->maxBlurSize,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  return 0;
}


/* Boolean SetPostProcessingGrainValues(PostProcessingGrainSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_SetPostProcessingGrainValues
               (PostProcessingManager *this,PostProcessingGrainSettings *grainSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__GrainSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GrainIntensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GrainLuminance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = grainSettings->grain;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_GRAIN,bVar1,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  pMVar2 = (this->fields).postProcessMaterial;
  if (pMVar2 != (Material *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__GrainIntensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (pMVar2,iVar3,(float)grainSettings->intensity / _UNK_?,(MethodInfo *)0x0);
    pMVar2 = (this->fields).postProcessMaterial;
    if (pMVar2 != (Material *)0x0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__GrainSize,(MethodInfo *)0x0);
      fVar4 = (float)grainSettings->size / _UNK_?;
      if (fVar4 < 0.0) {
        fVar4 = (float)FUN_?(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar2,iVar3,fVar4,(MethodInfo *)0x0);
      pMVar2 = (this->fields).postProcessMaterial;
      if (pMVar2 != (Material *)0x0) {
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__GrainLuminance,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar2,iVar3,(float)grainSettings->luminanceContribution / _UNK_?,
                   (MethodInfo *)0x0);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean SetPostProcessingLensDistortionValues(PostProcessingLensDistortionSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_SetPostProcessingLensDistortionValues
               (PostProcessingManager *this,
               PostProcessingLensDistortionSettings *lensDistortionSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__XMultiplier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__LensAdjustment);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__YMultiplier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__LensIntensity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = lensDistortionSettings->lensDistortion;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_LENS_DISTORTION,bVar1,(MethodInfo *)0x0
            );
  if (bVar1 != 0) {
    fVar2 = (float)lensDistortionSettings->intensity / _UNK_?;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 * _UNK_?;
    }
    pMVar3 = (this->fields).postProcessMaterial;
    if (pMVar3 != (Material *)0x0) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__LensIntensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar3,iVar4,fVar2,(MethodInfo *)0x0);
      pMVar3 = (this->fields).postProcessMaterial;
      if (pMVar3 != (Material *)0x0) {
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__LensAdjustment,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar3,iVar4,_UNK_? / (fVar2 + _UNK_?),(MethodInfo *)0x0);
        pMVar3 = (this->fields).postProcessMaterial;
        if (pMVar3 != (Material *)0x0) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            (StringLiteral__XMultiplier,(MethodInfo *)0x0);
          fVar2 = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (pMVar3,iVar4,(float)lensDistortionSettings->xMultiplier / _UNK_?,
                     (MethodInfo *)0x0);
          pMVar3 = (this->fields).postProcessMaterial;
          if (pMVar3 != (Material *)0x0) {
            iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              (StringLiteral__YMultiplier,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                      (pMVar3,iVar4,(float)lensDistortionSettings->yMultiplier / fVar2,
                       (MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar1 = (*pcVar5)();
    return bVar1;
  }
  return 0;
}


/* Boolean SetPostProcessingVignetteValues(PostProcessingVignetteSettings) */

bool Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_SetPostProcessingVignetteValues
               (PostProcessingManager *this,PostProcessingVignetteSettings *vignetteSettings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__VingetteExp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__VingetteInverseExp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__VingetteIntensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__VingetteInverseCornerNorm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__VingetteColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__VingetteSmoothness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__VingetteAspectRatio);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = *(undefined4 *)vignetteSettings;
  PostProcessingManager_SetEffectActiveState
            (this,PostProcessingManager_PostProcessKey__Enum_VINGETTE,(bool)uVar1,(MethodInfo *)0x0)
  ;
  fVar2 = _UNK_?;
  if ((bool)uVar1 != 0) {
    fVar3 = _UNK_?;
    if (vignetteSettings->rounded != 0) {
      fVar3 = (float)(this->fields).storedTextureResolution.m_X /
               (float)(this->fields).storedTextureResolution.m_Y;
    }
    uVar4 = vignetteSettings->roundness;
    fVar5 = (float)(int)uVar4 / _UNK_?;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_?();
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (fVar2 < fVar5) {
      fVar5 = fVar2;
    }
    fVar5 = fVar5 * _UNK_? + _UNK_?;
    pMVar6 = (this->fields).postProcessMaterial;
    iVar7 = vignetteSettings->intensity;
    if (pMVar6 != (Material *)0x0) {
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                         (StringLiteral__VingetteIntensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar6,iVar8,(float)iVar7 / _UNK_?,(MethodInfo *)0x0);
      pMVar6 = (this->fields).postProcessMaterial;
      iVar7 = vignetteSettings->smoothness;
      if (pMVar6 != (Material *)0x0) {
        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                           (StringLiteral__VingetteSmoothness,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (pMVar6,iVar8,(float)iVar7 / _UNK_?,(MethodInfo *)0x0);
        pMVar6 = (this->fields).postProcessMaterial;
        uVar9._0_4_ = (vignetteSettings->color).r;
        uVar9._4_4_ = (vignetteSettings->color).g;
        uVar10._0_4_ = (vignetteSettings->color).b;
        uVar10._4_4_ = (vignetteSettings->color).a;
        if (pMVar6 != (Material *)0x0) {
          aCStack_11[0]._0_8_ = uVar9;
          aCStack_11[0]._8_8_ = uVar10;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar6,StringLiteral__VingetteColor,aCStack_11,(MethodInfo *)0x0);
          pMVar6 = (this->fields).postProcessMaterial;
          if (pMVar6 != (Material *)0x0) {
            iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                               (StringLiteral__VingetteAspectRatio,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                      (pMVar6,iVar8,fVar3,(MethodInfo *)0x0);
            pMVar6 = (this->fields).postProcessMaterial;
            if (pMVar6 != (Material *)0x0) {
              iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                 (StringLiteral__VingetteExp,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                        (pMVar6,iVar8,fVar5,(MethodInfo *)0x0);
              pMVar6 = (this->fields).postProcessMaterial;
              if (pMVar6 != (Material *)0x0) {
                iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                   (StringLiteral__VingetteInverseExp,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                          (pMVar6,iVar8,fVar2 / fVar5,(MethodInfo *)0x0);
                pMVar6 = (this->fields).postProcessMaterial;
                if (pMVar6 != (Material *)0x0) {
                  iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                     (StringLiteral__VingetteInverseCornerNorm,(MethodInfo *)0x0);
                  auVar12._0_8_ = FUN_?();
                  auVar12._8_8_ = extraout_XMM0_Qb;
                  auVar13._4_12_ = auVar12._4_12_;
                  auVar13._0_4_ = (float)auVar12._0_8_ + fVar2;
                  fVar3 = (float)FUN_?(auVar13._0_8_);
                  if (fVar3 <= _UNK_?) {
                    fVar3 = _UNK_?;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                            (pMVar6,iVar8,fVar2 / fVar3,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar14 = (code *)swi(3);
    bVar15 = (*pcVar14)();
    return bVar15;
  }
  return 0;
}


/* Void <OnRenderImage>g__RunPassThenSwitchTextures|26_0(PostProcessingManager+Pass,
   PostProcessingManager+<>c__DisplayClass26_0 ByRef) */

void Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager__OnRenderImage_g__RunPassThenSwitchTextures_26_0
               (PostProcessingManager *this,PostProcessingManager_Pass__Enum pass,
               PostProcessingManager_c_DisplayClass26_0 *param_3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = param_3->currentSrc;
  pRVar2 = param_3->currentDst;
  mat = (this->fields).postProcessMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_1
            ((Texture *)pRVar1,pRVar2,mat,pass,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  param_3->currentSrc = param_3->currentDst;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)param_3 >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pRVar1 = param_3->currentDst;
  pRVar2 = param_3->rtA;
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
  if (pRVar2 == (RenderTexture *)0x0 && pRVar1 == (RenderTexture *)0x0) {
    uVar6 = 1;
  }
  else if (pRVar2 == (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pRVar1 == (RenderTexture *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar6 = (ulonglong)((pRVar1->fields)._._.m_CachedPtr == (void *)0x0);
  }
  else if (pRVar1 == (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar6 = (ulonglong)((pRVar2->fields)._._.m_CachedPtr == (void *)0x0);
  }
  else {
    uVar6 = (ulonglong)(pRVar1 == pRVar2);
  }
  bVar3 = iRam_? != 0;
  param_3->currentDst = (&param_3->rtA)[uVar6];
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&param_3->currentDst >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* PostProcessingManager() */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Dictionary__
            );
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0,0,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,1,1,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,2,0,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,3,2,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,4,2,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,5,2,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,6,3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_PostProcessingManager::Pass>__Add_PostProcessingManager__PostProcessKey__PostProcessingManager__Pass_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__PostProcessingManager->static_fields->PostProcessKeyToPassMap =
       (Dictionary_2_PostProcessingManager_PostProcessKey_PostProcessingManager_Pass_ *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__PostProcessingManager->static_fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  TypeInfo__PostProcessingManager->static_fields->isPostProcessEffectsEnabled = 0;
  TypeInfo__PostProcessingManager->static_fields->hasGamePostProcessEffects = 0;
  return;
}


/* PostProcessingManager() */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager__ctor
               (PostProcessingManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::PostProcessKey,_System::String>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).activeEffectsStrings =
       (Dictionary_2_PostProcessingManager_PostProcessKey_System_String_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).activeEffectsStrings >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>
                         );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<PostProcessingManager::PostProcessKey>__HashSet__
            );
  bVar2 = iRam_? != 0;
  (this->fields).activeEffects = (HashSet_1_PostProcessingManager_PostProcessKey_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).activeEffects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<PostProcessingManager::Pass,_int>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).activePasses = (Dictionary_2_PostProcessingManager_Pass_System_Int32_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).activePasses >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
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
  return;
}


/* Boolean get_HasGamePostProcessEffects() */

bool Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_get_HasGamePostProcessEffects
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  return TypeInfo__PostProcessingManager->static_fields->hasGamePostProcessEffects;
}


/* Boolean get_IsPostProcessEffectsEnabled() */

bool Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_get_IsPostProcessEffectsEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  return TypeInfo__PostProcessingManager->static_fields->isPostProcessEffectsEnabled;
}


/* Void set_HasGamePostProcessEffects(Boolean) */

void Assembly-CSharp.dll::PostProcessingManager::PostProcessingManager_set_HasGamePostProcessEffects
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  TypeInfo__PostProcessingManager->static_fields->hasGamePostProcessEffects = value;
  pAVar1 = TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void set_IsPostProcessEffectsEnabled(Boolean) */

void Assembly-CSharp.dll::PostProcessingManager::
     PostProcessingManager_set_IsPostProcessEffectsEnabled(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  TypeInfo__PostProcessingManager->static_fields->isPostProcessEffectsEnabled = value;
  pAVar1 = TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

