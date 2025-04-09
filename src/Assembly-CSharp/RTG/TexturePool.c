
/* TexturePool() */

void Assembly-CSharp.dll::RTG::TexturePool::TexturePool__ctor(TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::TexturePool>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::TexturePool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::TexturePool>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::TexturePool>__Singleton__);
  return;
}


/* Texture2D get_CamOrthoMode() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_CamOrthoMode
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Textures_CamOrthoMode);
    cRam_? = '\x01';
  }
  ppTVar1 = &(this->fields)._camOrthoMode;
  pTVar2 = *ppTVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar2 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                       (StringLiteral_Textures_CamOrthoMode,(MethodInfo *)0x0);
    if (pTVar2 == (Texture2D *)0x0) {
      *ppTVar1 = (Texture2D *)0x0;
      func_?();
      return *ppTVar1;
    }
    pTVar4 = (Texture2D *)0x0;
    if (pTVar2->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = pTVar2;
    }
    *ppTVar1 = pTVar4;
    func_?();
  }
  return *ppTVar1;
}


/* Texture2D get_CamPerspMode() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_CamPerspMode
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Textures_CamPerspMode);
    cRam_? = '\x01';
  }
  ppTVar1 = &(this->fields)._camPerspMode;
  pTVar2 = *ppTVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar2 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                       (StringLiteral_Textures_CamPerspMode,(MethodInfo *)0x0);
    if (pTVar2 == (Texture2D *)0x0) {
      *ppTVar1 = (Texture2D *)0x0;
      func_?();
      return *ppTVar1;
    }
    pTVar4 = (Texture2D *)0x0;
    if (pTVar2->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = pTVar2;
    }
    *ppTVar1 = pTVar4;
    func_?();
  }
  return *ppTVar1;
}


/* Texture2D get_XAxisLabel() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_XAxisLabel
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Textures_XAxisLabel);
    cRam_? = '\x01';
  }
  pTVar1 = &this->fields;
  pTVar2 = pTVar1->_xAxisLabel;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar2 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                       (StringLiteral_Textures_XAxisLabel,(MethodInfo *)0x0);
    if (pTVar2 == (Texture2D *)0x0) {
      pTVar1->_xAxisLabel = (Texture2D *)0x0;
      func_?();
      return pTVar1->_xAxisLabel;
    }
    pTVar4 = (Texture2D *)0x0;
    if (pTVar2->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = pTVar2;
    }
    pTVar1->_xAxisLabel = pTVar4;
    func_?();
  }
  return pTVar1->_xAxisLabel;
}


/* Texture2D get_YAxisLabel() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_YAxisLabel
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Textures_YAxisLabel);
    cRam_? = '\x01';
  }
  ppTVar1 = &(this->fields)._yAxisLabel;
  pTVar2 = *ppTVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar2 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                       (StringLiteral_Textures_YAxisLabel,(MethodInfo *)0x0);
    if (pTVar2 == (Texture2D *)0x0) {
      *ppTVar1 = (Texture2D *)0x0;
      func_?();
      return *ppTVar1;
    }
    pTVar4 = (Texture2D *)0x0;
    if (pTVar2->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = pTVar2;
    }
    *ppTVar1 = pTVar4;
    func_?();
  }
  return *ppTVar1;
}


/* Texture2D get_ZAxisLabel() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_ZAxisLabel
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Textures_ZAxisLabel);
    cRam_? = '\x01';
  }
  ppTVar1 = &(this->fields)._zAxisLabel;
  pTVar2 = *ppTVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar2 = (Texture2D *)
             UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                       (StringLiteral_Textures_ZAxisLabel,(MethodInfo *)0x0);
    if (pTVar2 == (Texture2D *)0x0) {
      *ppTVar1 = (Texture2D *)0x0;
      func_?();
      return *ppTVar1;
    }
    pTVar4 = (Texture2D *)0x0;
    if (pTVar2->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = pTVar2;
    }
    *ppTVar1 = pTVar4;
    func_?();
  }
  return *ppTVar1;
}

