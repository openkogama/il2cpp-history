
/* Void Awake() */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_Awake(AudioBuild *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this_00,(MethodInfo *)0x0)
  ;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (this_01,value,(MethodInfo *)0x0);
      pAVar1 = (AudioSource *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_00,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::AudioSource>__
                         );
      (this->fields).buildSource = pAVar1;
      func_?();
      pAVar1 = (this->fields).buildSource;
      if (pAVar1 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_playOnAwake
                  (pAVar1,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).buildSource;
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_spatialBlend
                    (pAVar1,0.86,(MethodInfo *)0x0);
          pAVar1 = (this->fields).buildSource;
          if (pAVar1 != (AudioSource *)0x0) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_minDistance
                      (pAVar1,20.0,(MethodInfo *)0x0);
            pAVar1 = (this->fields).buildSource;
            if (pAVar1 != (AudioSource *)0x0) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_maxDistance
                        (pAVar1,40.0,(MethodInfo *)0x0);
              pAVar1 = (this->fields).buildSource;
              if (pAVar1 != (AudioSource *)0x0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_rolloffMode
                          (pAVar1,AudioRolloffMode__Enum_Linear,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CubeAdded(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_CubeAdded
               (AudioBuild *this,Vector3 worldPos,MethodInfo *method)

{
  AudioBuild_PlayClip(this,worldPos,(this->fields).cubeAdded,0.8,1.1,(MethodInfo *)0x0);
  return;
}


/* Void CubePainted(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_CubePainted
               (AudioBuild *this,Vector3 worldPos,MethodInfo *method)

{
  AudioBuild_PlayClip(this,worldPos,(this->fields).cubePainted,1.0,1.0,(MethodInfo *)0x0);
  return;
}


/* Void CubeRemoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_CubeRemoved
               (AudioBuild *this,Vector3 worldPos,MethodInfo *method)

{
  AudioBuild_PlayClip(this,worldPos,(this->fields).cubeRemoved,1.0,1.0,(MethodInfo *)0x0);
  return;
}


/* Void EdgeMoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_EdgeMoved
               (AudioBuild *this,Vector3 worldPos,MethodInfo *method)

{
  AudioBuild_PlayClip(this,worldPos,(this->fields).edgeMoved,1.0,1.0,(MethodInfo *)0x0);
  return;
}


/* Void FaceMoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_FaceMoved
               (AudioBuild *this,Vector3 worldPos,MethodInfo *method)

{
  AudioBuild_PlayClip(this,worldPos,(this->fields).faceMoved,0.5,1.4,(MethodInfo *)0x0);
  return;
}


/* Void PlayClip(Vector3, AudioClip, Single, Single) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_PlayClip
               (AudioBuild *this,Vector3 worldPos,AudioClip *audioClip,float randMin,float randMax,
               MethodInfo *method)

{
  pAVar1 = (this->fields).buildSource;
  if (pAVar1 != (AudioSource *)0x0) {
    fVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_time
                      (pAVar1,(MethodInfo *)0x0);
    if (fVar2 != _UNK_?) {
      return;
    }
    pAVar1 = (this->fields).buildSource;
    if ((pAVar1 != (AudioSource *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,worldPos,(MethodInfo *)0x0);
      pAVar1 = (this->fields).buildSource;
      if (pAVar1 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                  (pAVar1,(AudioClip *)0x0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).buildSource;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                          (randMin,randMax,(MethodInfo *)0x0);
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (pAVar1,fVar2,(MethodInfo *)0x0);
          pAVar1 = (this->fields).buildSource;
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                            (0.7,1.0,(MethodInfo *)0x0);
          if (pAVar1 != (AudioSource *)0x0) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                      (pAVar1,fVar2,(MethodInfo *)0x0);
            pAVar1 = (this->fields).buildSource;
            if (pAVar1 != (AudioSource *)0x0) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                        (pAVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Translate(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_Translate
               (AudioBuild *this,float moveValue,bool moveToGridPos,Vector3 worldPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).buildSource;
  if (moveToGridPos == 0) {
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if ((this->fields).currentTranslateMoveValue == moveValue) {
      return;
    }
    pAVar1 = (this->fields).buildSource;
    if ((pAVar1 == (AudioSource *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pAVar1,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar3,worldPos,(MethodInfo *)0x0);
    moveValue = (float)(this->fields).buildSource;
    if ((AudioSource *)moveValue == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              ((AudioSource *)moveValue,(this->fields).translateNotGrid,(MethodInfo *)0x0);
    pAVar1 = (this->fields).buildSource;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (0.7,1.2,(MethodInfo *)0x0);
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar1,fVar4,(MethodInfo *)0x0);
  }
  else {
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pAVar1 = (this->fields).buildSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                    (pAVar1,(MethodInfo *)0x0);
      y = (this->fields).translateNotGrid;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      in_stack_5 = (MethodInfo *)&UNK_?;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
    }
    pAVar1 = (this->fields).buildSource;
    if ((pAVar1 == (AudioSource *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pAVar1,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar3,worldPos,(MethodInfo *)0x0);
    pAVar1 = (this->fields).buildSource;
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (pAVar1,(this->fields).translateGrid,(MethodInfo *)0x0);
    pAVar1 = (this->fields).buildSource;
    moveValue = (float)&UNK_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (0.7,1.1,(MethodInfo *)0x0);
    if (pAVar1 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar1,fVar4,(MethodInfo *)0x0);
    in_stack_6 = 0.8;
  }
  pAVar1 = (this->fields).buildSource;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                    (in_stack_6,in_stack_7,in_stack_5);
  if (pAVar1 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (pAVar1,fVar4,(MethodInfo *)0x0);
    pAVar1 = (this->fields).buildSource;
    if (pAVar1 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (pAVar1,(MethodInfo *)0x0);
      (this->fields).currentTranslateMoveValue = moveValue;
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void VertexMoved(Vector3) */

void Assembly-CSharp.dll::AudioBuild::AudioBuild_VertexMoved
               (AudioBuild *this,Vector3 worldPos,MethodInfo *method)

{
  AudioBuild_PlayClip(this,worldPos,(this->fields).vertexMoved,1.0,1.0,(MethodInfo *)0x0);
  return;
}


/* AudioBuild() */

void Assembly-CSharp.dll::AudioBuild::AudioBuild__ctor(AudioBuild *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AudioSource);
    cRam_? = '\x01';
  }
  this_00 = (Singleton_1_System_Object_ *)func_?(TypeInfo__UnityEngine__AudioSource);
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  (this->fields).buildSource = (AudioSource *)this_00;
  func_?(&(this->fields).buildSource,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

