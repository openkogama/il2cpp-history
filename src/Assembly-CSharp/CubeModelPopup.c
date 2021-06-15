
/* Void Initialize(Byte) */

void Assembly-CSharp.dll::CubeModelPopup::CubeModelPopup_Initialize
               (CubeModelPopup *this,uint8_t currentMaterialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).materialID = currentMaterialId;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pCVar2 != (CelestialParam *)0x0) {
      this_00 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)pCVar2,currentMaterialId,(MethodInfo *)0x0);
      if (this_00 != (MVMaterial *)0x0) {
        bVar3 = MVMaterial::MVMaterial_get_IsDestructible(this_00,(MethodInfo *)0x0);
        if ((bVar3 != 0) || ((this_00->fields).isUnlocked == 0)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
          if (pCVar2 == (CelestialParam *)0x0) goto code_?;
          this_00 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              ((MVMaterialRepository *)pCVar2,0x15,(MethodInfo *)0x0);
          (this->fields).materialID = 0x15;
        }
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_01 != (PrefabPool *)0x0) {
          pXVar4 = (XpBoostParticlePreviewer *)
                   PrefabPool::PrefabPool_get_MaterialButtonTextureGenerator
                             (this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             (pXVar4,
                              MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                             );
          if ((pXVar4 != (XpBoostParticlePreviewer *)0x0) &&
             ((pXVar4->fields).layersToRender = 0xb4, this_00 != (MVMaterial *)0x0)) {
            mesh = (Mesh *)System.dll::System::Collections::Generic::
                           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                           ::Single,System::Object]::
                           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                       *)this_00,(MethodInfo *)0x0);
            value = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                              ((MaterialButtonTextureGenerator *)pXVar4,mesh,(MethodInfo *)0x0);
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pXVar4,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            pRVar5 = (this->fields).scale25Percent;
            if (pRVar5 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (pRVar5,(Texture *)value,(MethodInfo *)0x0);
              pRVar5 = (this->fields).scale50Percent;
              if (pRVar5 != (RawImage *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                          (pRVar5,(Texture *)value,(MethodInfo *)0x0);
                pRVar5 = (this->fields).scale100Percent;
                if (pRVar5 != (RawImage *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (pRVar5,(Texture *)value,(MethodInfo *)0x0);
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnModelScalePressed(Single) */

void Assembly-CSharp.dll::CubeModelPopup::CubeModelPopup_OnModelScalePressed
               (CubeModelPopup *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CubeModelPopup___OnModelScalePressed_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)scale;
    (this_00->fields).state = (int32_t)this;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this_00,
               MethodInfo__CubeModelPopup___OnModelScalePressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IMaterialClicked__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)pUVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar1,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IMaterialClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>_
              );
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this_00,
               MethodInfo__CubeModelPopup___OnModelScalePressed_c__AnonStorey0____m__1_UnityEngine__EventSystems__ICreateNewPrototype__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICreateNewPrototype>__EventFunction_System__Object__void__
              );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar1,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICreateNewPrototype>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICreateNewPrototype>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

