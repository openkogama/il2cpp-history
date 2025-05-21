
/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_ScreenShotDataTexHandler
               (AvatarScreenShooter *this,Texture2D *screenshotTex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).bodyCloneGO;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  (this->fields).bodyCloneGO = (GameObject *)0x0;
  func_?(&(this->fields).bodyCloneGO,0);
  pAVar1 = (this->fields).callback;
  (this->fields).isMakingScreenShot = 0;
  if (pAVar1 != (Action_2_UnityEngine_Texture2D_String_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,screenshotTex,(this->fields).successMessage,
               (pAVar1->fields)._._.method);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TakeScreenShot(Action`2[UnityEngine.Texture2D,String], MVBody, Boolean, String) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
               (AvatarScreenShooter *this,Action_2_UnityEngine_Texture2D_String_ *callback,
               MVBody *body,bool ignoreAccessories,String *successMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Texture2D>);
    func_?(&
                    MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
                   );
    func_?(&
                    SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_screenshot_generation_of_avatar_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_screenshot_generation_of_avatar_,(MethodInfo *)0x0);
  if ((this->fields).isMakingScreenShot == 0) {
    (this->fields).callback = callback;
    func_?(&(this->fields).callback,callback);
    (this->fields).successMessage = successMessage;
    func_?(&(this->fields).successMessage,successMessage);
    if (body != (MVBody *)0x0) {
      pGVar1 = (body->fields)._._._.gameObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (this->fields).bodyCloneGO = pGVar1;
      func_?(&(this->fields).bodyCloneGO,pGVar1);
      pGVar1 = (this->fields).bodyCloneGO;
      if (pGVar1 == (GameObject *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (pGVar1,
                          SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                         );
      uVar4 = 0;
      if (pOVar3 == (Object__Array *)0x0) goto code_?;
      ppOVar5 = pOVar3->vector;
      for (; (int)uVar4 < (int)pOVar3->max_length; uVar4 = uVar4 + 1) {
        if (pOVar3->max_length <= uVar4) goto code_?;
        if ((SkinnedMeshOptimizer *)*ppOVar5 == (SkinnedMeshOptimizer *)0x0) goto code_?;
        SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                  ((SkinnedMeshOptimizer *)*ppOVar5,(MethodInfo *)0x0);
        if (pOVar3->max_length <= uVar4) goto code_?;
        this = (AvatarScreenShooter *)*ppOVar5;
        if (this == (AvatarScreenShooter *)0x0) goto code_?;
        SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                  ((SkinnedMeshOptimizer *)this,(MethodInfo *)0x0);
        ppOVar5 = ppOVar5 + 1;
      }
      if (ignoreAccessories != 0) {
        pGVar1 = (this->fields).bodyCloneGO;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren
                           (pGVar1,
                            AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
                           );
        uVar4 = 0;
        if (pOVar3 == (Object__Array *)0x0) goto code_?;
        ppOVar5 = pOVar3->vector;
        for (; (int)uVar4 < (int)pOVar3->max_length; uVar4 = uVar4 + 1) {
          if (pOVar3->max_length <= uVar4) goto code_?;
          if ((Component *)*ppOVar5 == (Component *)0x0) goto code_?;
          pOVar3 = (Object__Array *)&UNK_?;
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)*ppOVar5,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pGVar1 = (GameObject *)&UNK_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar1,(MethodInfo *)0x0);
          ppOVar5 = ppOVar5 + 1;
        }
      }
      pGVar1 = (this->fields).bodyCloneGO;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_,
                 (MethodInfo *)0x0);
      AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate
                (pGVar1,(Action_1_UnityEngine_Texture2D_ *)this_00,(MethodInfo *)0x0);
    }
    (this->fields).isMakingScreenShot = 1;
  }
  return;
}


/* AvatarScreenShooter() */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter__ctor
               (AvatarScreenShooter *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields).lookAtOffset.x = 0.0;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).cameraOffset.x = (float)uVar1;
  (this->fields).cameraOffset.y = (float)uVar2;
  (this->fields).cameraOffset.z = 2.0;
  (this->fields).lookAtOffset.z = 0.0;
  (this->fields).previewPosition.m_XMin = fVar6;
  (this->fields).previewPosition.m_YMin = fVar5;
  (this->fields).previewPosition.m_Width = fVar4;
  (this->fields).previewPosition.m_Height = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

