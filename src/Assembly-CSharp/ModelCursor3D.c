
/* Void Remove() */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_Remove
               (ModelCursor3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._.faceCursor;
  if (this_00 != (FaceCursor *)0x0) {
    FaceCursor::FaceCursor_Remove(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._.errorCursor;
    if (this_01 != (CellCursor *)0x0) {
      CellCursor::CellCursor_Remove(this_01,(MethodInfo *)0x0);
      if ((this->fields).indentArea != (IndentArea *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        obj = *(Object_1 **)(in_stack_1 + 0x14);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetIndentAreaSize(Single) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_SetIndentAreaSize
               (ModelCursor3D *this,float size,MethodInfo *method)

{
  this_00 = (this->fields).indentArea;
  if (this_00 != (IndentArea *)0x0) {
    IndentArea::IndentArea_set_Size(this_00,size,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCursor(CubePickingInfo, CubePickingInfo, GameObject, BuildState, Boolean) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_UpdateCursor
               (ModelCursor3D *this,CubePickingInfo *movingEdgeCube,CubePickingInfo *selectedCube,
               GameObject *targetGameObject,BuildState__Enum buildState,bool addCube,
               MethodInfo *method)

{
  if (movingEdgeCube == (CubePickingInfo *)0x0) {
    pKVar1 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields)._.faceCursor;
    if (selectedCube != (CubePickingInfo *)0x0) {
      if (pKVar1 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) goto code_?;
      info = (CubePickingInfo *)&UNK_?;
      method_00 = (MethodInfo *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            (pKVar1,(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) goto code_?;
      pGVar2 = (GameObject *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)method_00,1,(MethodInfo *)0x0);
      this_02 = (this->fields)._.faceCursor;
      if (this_02 == (FaceCursor *)0x0) goto code_?;
      goto code_?;
    }
    if ((pKVar1 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) ||
       (pGVar2 = (GameObject *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           (pKVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pIVar3 = (this->fields).indentArea;
    if ((pIVar3 == (IndentArea *)0x0) ||
       (pGVar2 = (GameObject *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pIVar3,(MethodInfo *)0x0),
       pGVar2 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  else {
    pIVar3 = (this->fields).indentArea;
    if (pIVar3 == (IndentArea *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    info = movingEdgeCube;
    pGVar2 = targetGameObject;
    IndentArea::IndentArea_UpdateIndentArea
              (pIVar3,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
    pKVar1 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields)._.faceCursor;
    if ((pKVar1 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) ||
       (this_01 = (GameObject *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            (pKVar1,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    this_02 = (this->fields)._.faceCursor;
    if (this_02 == (FaceCursor *)0x0) goto code_?;
    selectedCube = (CubePickingInfo *)targetGameObject;
code_?:
    FaceCursor::FaceCursor_UpdateCursor(this_02,info,pGVar2,method_00);
  }
  this_00 = (this->fields)._.errorCursor;
  if (this_00 != (CellCursor *)0x0) {
    CellCursor::CellCursor_UpdateCursor(this_00,(MethodInfo *)0x0);
    ModelCursor::ModelCursor_HandleLaser
              ((ModelCursor *)this,movingEdgeCube,selectedCube,targetGameObject,buildState,addCube,
               (MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ModelCursor3D(Vector3[]) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D__ctor
               (ModelCursor3D *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.addCubeLaserOnTime = 0.2;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_CellCursorErrorMaterial(pPVar1,(MethodInfo *)0x0);
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_00,1,0.03,pMVar2,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields)._.errorCursor = this_00;
    this_01 = (IndentArea *)func_?();
    IndentArea::IndentArea__ctor(this_01,(MethodInfo *)0x0);
    (this->fields).indentArea = this_01;
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pMVar2 = PrefabPool::PrefabPool_get_CursorMaterial(pPVar1,(MethodInfo *)0x0);
      pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        materialCornerPath =
             PrefabPool::PrefabPool_get_CursorCornerMaterial(pPVar1,(MethodInfo *)0x0);
        pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          materialNonePath = PrefabPool::PrefabPool_get_CursorNoneMaterial(pPVar1,(MethodInfo *)0x0)
          ;
          this_02 = (FaceCursor *)func_?(TypeInfo__FaceCursor);
          FaceCursor::FaceCursor__ctor
                    (this_02,pMVar2,materialCornerPath,materialNonePath,(MethodInfo *)0x0);
          (this->fields)._.faceCursor = this_02;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_set_CursorVisible
               (ModelCursor3D *this,bool value,MethodInfo *method)

{
  this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields)._.faceCursor;
  if (this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
    pGVar1 = (GameObject *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,value,(MethodInfo *)0x0);
      this_01 = (this->fields)._.errorCursor;
      if (this_01 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(this_01,value,(MethodInfo *)0x0);
        this_02 = (this->fields).indentArea;
        if (this_02 != (IndentArea *)0x0) {
          pGVar1 = (GameObject *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0
                             );
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,value,(MethodInfo *)0x0);
            return;
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

