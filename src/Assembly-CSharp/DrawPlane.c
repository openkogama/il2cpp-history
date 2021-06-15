
/* Void DrawPlaneToModel(GameObject) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_DrawPlaneToModel
               (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos(pWVar2,(MethodInfo *)0x0);
    pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
    if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
      WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                (pWVar2,gameObject,(MethodInfo *)0x0);
      pWVar2 = (pDVar1->fields).worldEditorDrawPlane;
      if (pWVar2 != (WorldEditorDrawPlane *)0x0) {
        method = (MethodInfo *)0x0;
        this = (in_stack_3->fields)._targetGameObject;
        if (this != (GameObject *)0x0) {
          gameObject = (GameObject *)pWVar2;
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            gameObject = (GameObject *)0x0;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&gameObject,this_00,(MethodInfo *)0x0);
            uVar5 = pVVar4->x;
            uVar6 = pVVar4->y;
            fStack7 = pVVar4->z;
            gameObject = (GameObject *)uVar5;
            method = (MethodInfo *)uVar6;
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
                      (in_stack_3,*pVVar4,(MethodInfo *)0x0);
            return;
          }
        }
        gameObject = (GameObject *)0x0;
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  fStack7 = 0.0;
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_GetCubePosOnDrawplane
               (GameObject *gameObject,IntVector *intVectorHitPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    bVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePosOnDrawplane
                      (this,gameObject,intVectorHitPosition,(MethodInfo *)0x0);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void HideDrawPlane() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_HideDrawPlane(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((this != (DrawPlaneControllerUUI *)0x0) &&
     (this_00 = (this->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)) {
    bVar1 = UIStack::UIStack_get_StackReady((UIStack *)this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(DrawPlaneControllerUUI) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_Initialize
               (DrawPlaneControllerUUI *drawPlaneController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__DrawPlane->static_fields->drawPlaneController = drawPlaneController;
  return;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_MoveDrawPlane(int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_MoveDrawPlane(this,dir,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_Pick(Vector3 *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
  }
  this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                      ((MethodInfo *)0x0);
  if (this_00 != (EventSystem *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pDVar2 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if ((pDVar2 != (DrawPlaneControllerUUI *)0x0) &&
       (this = (pDVar2->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
      bVar1 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick(this,(Vector3 *)0x0,(MethodInfo *)0x0)
      ;
      return bVar1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Reset() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__DrawPlane->static_fields->drawPlaneController = (DrawPlaneControllerUUI *)0x0;
  return;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_ReturnDrawPlaneToLandscape(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ToggleDrawPlane() */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_ToggleDrawPlane(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (this != (DrawPlaneControllerUUI *)0x0) {
    DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Altitude() */

int32_t Assembly-CSharp.dll::DrawPlane::DrawPlane_get_Altitude(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,(MethodInfo *)0x0);
    return (int32_t)pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_InputEnabled() */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_get_InputEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
    return (pDVar1->fields).inputEnabled;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsDrawPlaneActive() */

bool Assembly-CSharp.dll::DrawPlane::DrawPlane_get_IsDrawPlaneActive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    bVar2 = UIStack::UIStack_get_StackReady((UIStack *)this,(MethodInfo *)0x0);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* DrawPlaneAxis get_Orientation() */

DrawPlaneAxis__Enum Assembly-CSharp.dll::DrawPlane::DrawPlane_get_Orientation(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
             Object]::
             Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this,
                        (MethodInfo *)0x0);
    return (DrawPlaneAxis__Enum)pOVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  DVar4 = (*pcVar3)();
  return DVar4;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::DrawPlane::DrawPlane_get_Pos
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    pVVar2 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos(&VStack_3,this,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    __return_storage_ptr__->x = pVVar2->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar6)();
  return pVVar2;
}


/* Void set_InputEnabled(Boolean) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_set_InputEnabled(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
    (pDVar1->fields).inputEnabled = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::DrawPlane::DrawPlane_set_Orientation
               (DrawPlaneAxis__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (this = (pDVar1->fields).worldEditorDrawPlane, this != (WorldEditorDrawPlane *)0x0)) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation(this,value,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

