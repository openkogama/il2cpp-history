
/* Void Initialize(LimbRotationRuntimeData, AvatarLimbManagerRemote) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,
               LimbRotationRuntimeData *limbRotationRuntimeData,AvatarLimbManagerRemote *limbManager
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).limbManager = limbManager;
  if (limbRotationRuntimeData != (LimbRotationRuntimeData *)0x0) {
    pMVar1 = (limbRotationRuntimeData->fields).HeadRotationYaw;
    if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
      pMVar2 = (pMVar1->fields).OnChange;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadYawChange_System__Object_
                 ,(MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar2 = pMVar4;
        }
        pMVar5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
      (pMVar1->fields).OnChange = pMVar2;
      pMVar1 = (limbRotationRuntimeData->fields).HeadRotationPitch;
      if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
        pMVar2 = (pMVar1->fields).OnChange;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadPitchChange_System__Object_
                   ,(MethodInfo *)0x0);
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar2 = pMVar4;
          }
          pMVar5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
          if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        }
        (pMVar1->fields).OnChange = pMVar2;
        pMVar1 = (limbRotationRuntimeData->fields).PointRotationYaw;
        if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
          pMVar2 = (pMVar1->fields).OnChange;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointYawChange_System__Object_
                     ,(MethodInfo *)0x0);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar2 = pMVar4;
            }
            pMVar5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
            if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          }
          (pMVar1->fields).OnChange = pMVar2;
          pMVar1 = (limbRotationRuntimeData->fields).PointRotationPitch;
          if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
            pMVar2 = (pMVar1->fields).OnChange;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointPitchChange_System__Object_
                       ,(MethodInfo *)0x0);
            pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
            pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar2 = pMVar4;
              }
              pMVar5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
              if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
            }
            (pMVar1->fields).OnChange = pMVar2;
            pMVar1 = (limbRotationRuntimeData->fields).Emote;
            if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
              pMVar2 = (pMVar1->fields).OnChange;
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this,
                         MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnEmoteDataChange_System__Object_
                         ,(MethodInfo *)0x0);
              pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
              pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
                (pMVar1->fields).OnChange = pMVar2;
                return;
              }
              if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar2 = pMVar4;
              }
              pMVar5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
              if (pMVar2 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEmoteDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnEmoteDataChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *newEmoteData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newEmoteData != (Object *)0x0) {
    pIVar1 = TypeInfo__System__Int32;
    if ((newEmoteData->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    puVar2 = (undefined1 *)func_?(newEmoteData);
    pAVar3 = (this->fields).limbManager;
    if (pAVar3 != (AvatarLimbManagerRemote *)0x0) {
      (*(code *)(pAVar3->klass->vtable).StartEmote.method)(pAVar3,*puVar2,pAVar3->klass[1]._0.image)
      ;
      return;
    }
  }
  func_?(0);
  newEmoteData = extraout_ECX;
  pIVar1 = extraout_EDX;
code_?:
  func_?(newEmoteData,pIVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHeadPitchChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnHeadPitchChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *headPitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (headPitch != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((headPitch->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(headPitch);
    pitch = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newHeadPitchValue = pitch;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateHeadRotationRemotely
                (this_00,(this->fields).newHeadYawValue,pitch,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  headPitch = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(headPitch,pSVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHeadYawChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnHeadYawChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *headYaw,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (headYaw != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((headYaw->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(headYaw);
    yaw = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newHeadYawValue = yaw;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateHeadRotationRemotely
                (this_00,yaw,(this->fields).newHeadPitchValue,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  headYaw = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(headYaw,pSVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointPitchChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointPitchChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *pointPitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (pointPitch != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((pointPitch->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(pointPitch);
    pitch = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newPointPitchValue = pitch;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
                (this_00,(this->fields).newPointYawValue,pitch,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pointPitch = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(pointPitch,pSVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointYawChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointYawChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *pointYaw,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (pointYaw != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((pointYaw->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(pointYaw);
    yaw = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newPointYawValue = yaw;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
                (this_00,yaw,(this->fields).newPointPitchValue,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pointYaw = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(pointYaw,pSVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHeadRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdateHeadRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  this_00 = (this->fields).limbManager;
  if (this_00 != (AvatarLimbManagerRemote *)0x0) {
    AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateHeadRotationRemotely
              (this_00,(this->fields).newHeadYawValue,(this->fields).newHeadPitchValue,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdatePointRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdatePointRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  this_00 = (this->fields).limbManager;
  if (this_00 != (AvatarLimbManagerRemote *)0x0) {
    AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
              (this_00,(this->fields).newPointYawValue,(this->fields).newPointPitchValue,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

