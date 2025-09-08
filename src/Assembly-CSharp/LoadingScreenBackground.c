
/* Void OnBackgroundImageRecieved() */

void Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_OnBackgroundImageRecieved
               (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).imageStream;
  if (pSVar1 != (StreamPngToSprite *)0x0) {
    pRVar2 = (pSVar1->fields).rawImage;
    if (pRVar2 != (RawImage *)0x0) {
      (*(code *)(pRVar2->klass->vtable).set_color.method)
                (pRVar2,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                 (pRVar2->klass->vtable).get_raycastTarget.methodPtr);
      pSVar1 = (this->fields).imageStream;
      if ((pSVar1 != (StreamPngToSprite *)0x0) &&
         (pRVar2 = (pSVar1->fields).rawImage, pRVar2 != (RawImage *)0x0)) {
        source = (Texture *)
                 (*(code *)(pRVar2->klass->vtable).get_mainTexture.method)
                           (pRVar2,(pRVar2->klass->vtable).OnCullingChanged.methodPtr);
        if (source != (Texture *)0x0) {
          iVar3 = (*(code *)(source->klass->vtable).get_width.method)
                            (source,(source->klass->vtable).set_width.methodPtr);
          iVar4 = (*(code *)(source->klass->vtable).get_height.method)
                            (source,(source->klass->vtable).set_height.methodPtr);
          dest = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                 RenderTexture_GetTemporary_7(iVar3,iVar4,0,(MethodInfo *)0x0);
          iVar3 = (*(code *)(source->klass->vtable).get_width.method)
                            (source,(source->klass->vtable).set_width.methodPtr);
          iVar4 = (*(code *)(source->klass->vtable).get_height.method)
                            (source,(source->klass->vtable).set_height.methodPtr);
          pRVar5 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                    (pRVar5,iVar3,iVar4,0,(MethodInfo *)0x0);
          (this->fields).finalBluredTex = pRVar5;
          func_?();
          pRVar5 = (this->fields).finalBluredTex;
          if (pRVar5 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Create
                      (pRVar5,(MethodInfo *)0x0);
            mat = (this->fields).horizontalBlur;
            if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Graphics);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_2
                      (source,dest,mat,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_2
                      ((Texture *)dest,(this->fields).finalBluredTex,(this->fields).VerticalBlur,
                       (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
                      (dest,(MethodInfo *)0x0);
            pSVar1 = (this->fields).imageStream;
            if ((pSVar1 != (StreamPngToSprite *)0x0) &&
               (pRVar2 = (pSVar1->fields).rawImage, pRVar2 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (pRVar2,(Texture *)(this->fields).finalBluredTex,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_OnDestroy
               (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).imageStream;
  if (pSVar1 == (StreamPngToSprite *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar2 = (pSVar1->fields).OnDownloadFinish;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__,(MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pSVar1->fields).OnDownloadFinish = (Action *)0x0;
code_?:
      func_?();
      pRVar3 = (this->fields).finalBluredTex;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      pRVar3 = (this->fields).finalBluredTex;
      if (pRVar3 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                  (pRVar3,(MethodInfo *)0x0);
        (this->fields).finalBluredTex = (RenderTexture *)0x0;
        func_?(&(this->fields).finalBluredTex,0);
        return;
      }
      goto code_?;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar2;
    }
    if (pAVar5 == (Action *)0x0) goto code_?;
    (pSVar1->fields).OnDownloadFinish = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar2;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_Start
               (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    StreamPngToSprite_MethodInfo__UnityEngine__Component__GetComponent<StreamPngToSprite>__
                   );
    func_?(&MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__);
    cRam_? = '\x01';
  }
  pSVar1 = (StreamPngToSprite *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      StreamPngToSprite_MethodInfo__UnityEngine__Component__GetComponent<StreamPngToSprite>__
                     );
  (this->fields).imageStream = pSVar1;
  func_?(&(this->fields).imageStream,pSVar1);
  pSVar1 = (this->fields).imageStream;
  if (pSVar1 == (StreamPngToSprite *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pSVar1->fields).OnDownloadFinish;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__,(MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pSVar1->fields).OnDownloadFinish = (Action *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
    (pSVar1->fields).OnDownloadFinish = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator WaitForSessionDataCoroutine() */

IEnumerator *
Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_WaitForSessionDataCoroutine
          (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}

