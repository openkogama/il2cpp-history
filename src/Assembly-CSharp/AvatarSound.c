
/* Void HandleActiveBounce() */

void Assembly-CSharp.dll::AvatarSound::AvatarSound_HandleActiveBounce
               (AvatarSound *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Bounchy_jump);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).audioManager;
    pSVar2 = (this->fields).bouncyAudioManual;
    if (pSVar2 != (StreamedAudioClipManual *)0x0) {
      clip = (pSVar2->fields)._Clip_k__BackingField;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&VStack_3);
        if (this_00 != (AudioManager *)0x0) {
          VStack_7.z = VStack_3.z;
          VStack_7.x = VStack_3.x;
          VStack_7.y = VStack_3.y;
          AudioManager::AudioManager_Play
                    (this_00,StringLiteral_Bounchy_jump,clip,&VStack_7,_UNK_?,
                     SoundRangeDistance__Enum_Short,_UNK_?,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleWallJump() */

void Assembly-CSharp.dll::AvatarSound::AvatarSound_HandleWallJump
               (AvatarSound *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Parkeur_jump);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).audioManager;
    pSVar2 = (this->fields).parkourAudioManual;
    if (pSVar2 != (StreamedAudioClipManual *)0x0) {
      clip = (pSVar2->fields)._Clip_k__BackingField;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&VStack_3);
        if (this_00 != (AudioManager *)0x0) {
          VStack_7.z = VStack_3.z;
          VStack_7.x = VStack_3.x;
          VStack_7.y = VStack_3.y;
          AudioManager::AudioManager_Play
                    (this_00,StringLiteral_Parkeur_jump,clip,&VStack_7,_UNK_?,
                     SoundRangeDistance__Enum_Short,_UNK_?,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

