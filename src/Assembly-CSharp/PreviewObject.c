
/* Void Awake() */

void Assembly-CSharp.dll::PreviewObject::PreviewObject_Awake(PreviewObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    cRam_? = '\x01';
  }
  width = (this->fields).width;
  height = (this->fields).height;
  depth = (this->fields).depth;
  pRVar1 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
            (pRVar1,width,height,depth,(MethodInfo *)0x0);
  (this->fields).renderTexture = pRVar1;
  func_?(&(this->fields).renderTexture,pRVar1);
  pRVar1 = (this->fields).renderTexture;
  if (pRVar1 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar1,(this->fields).antiAliasing,(MethodInfo *)0x0);
    pRVar1 = (this->fields).renderTexture;
    if (pRVar1 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)pRVar1,(this->fields).filterMode,(MethodInfo *)0x0);
      pRVar1 = (this->fields).renderTexture;
      if (pRVar1 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)pRVar1,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        this_00 = (this->fields).previewCamera;
        if (this_00 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (this_00,(this->fields).renderTexture,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PreviewObject::PreviewObject_OnDestroy
               (PreviewObject *this,MethodInfo *method)

{
  this_00 = (this->fields).previewCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (this_00,(RenderTexture *)0x0,(MethodInfo *)0x0);
    if ((this->fields).renderTexture != (RenderTexture *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

