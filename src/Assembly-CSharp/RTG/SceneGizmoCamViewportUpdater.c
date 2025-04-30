
/* Void Update(RTSceneGizmoCamera) */

void Assembly-CSharp.dll::RTG::SceneGizmoCamViewportUpdater::SceneGizmoCamViewportUpdater_Update
               (SceneGizmoCamViewportUpdater *this,RTSceneGizmoCamera *sceneGizmoCamera,
               MethodInfo *method)

{
  pSVar1 = (this->fields)._sceneGizmo;
  if ((pSVar1 == (SceneGizmo *)0x0) ||
     ((this_00 = (pSVar1->fields)._sharedLookAndFeel, this_00 == (SceneGizmoLookAndFeel *)0x0 &&
      (this_00 = (pSVar1->fields)._lookAndFeel, this_00 == (SceneGizmoLookAndFeel *)0x0))))
  goto code_?;
  fVar2 = (this_00->fields)._screenOffset.x;
  fVar3 = (this_00->fields)._screenOffset.y;
  if ((sceneGizmoCamera == (RTSceneGizmoCamera *)0x0) ||
     (pCVar4 = (sceneGizmoCamera->fields)._sceneCamera, pCVar4 == (Camera *)0x0))
  goto code_?;
  pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                      ((Rect *)&stack0xffffffd8,pCVar4,(MethodInfo *)0x0);
  fStack_6 = pRVar5->m_XMin;
  fVar7 = pRVar5->m_YMin;
  fVar8 = pRVar5->m_Width;
  fVar9 = pRVar5->m_Height;
  VVar10 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_CalculateMaxPrjSwitchLabelRectSize
                     (this_00,(MethodInfo *)0x0);
  fVar11 = (this_00->fields)._screenSize;
  iVar12 = (this_00->fields)._screenCorner;
  bVar13 = (this_00->fields)._isCamPrjSwitchLabelVisible;
  pCVar4 = (sceneGizmoCamera->fields)._camera;
  if (iVar12 == 1) {
    fStack_6 = (fVar8 + fStack_6) - fVar11;
code_?:
    fStack_6 = fStack_6 + fVar2;
    fVar7 = (fVar9 + fVar7) - fVar11;
  }
  else {
    if (iVar12 == 0) goto code_?;
    fStack_14 = VVar10.y;
    if (iVar12 == 2) {
      if (bVar13 == 0) {
        fStack_14 = 0.0;
      }
      else {
        fStack_14 = fStack_14 + _UNK_?;
      }
      fStack_6 = ((fVar8 + fStack_6) - fVar11) + fVar2;
      fVar7 = fVar7 + fStack_14;
    }
    else {
      fStack_6 = fStack_6 + fVar2;
      if (bVar13 == 0) {
        fVar7 = fVar7 + 0.0;
      }
      else {
        fVar7 = fVar7 + fStack_14 + _UNK_?;
      }
    }
  }
  if (pCVar4 != (Camera *)0x0) {
    value.m_YMin = fVar7 + fVar3;
    value.m_XMin = fStack_6;
    value.m_Width = fVar11;
    value.m_Height = fVar11;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_pixelRect
              (pCVar4,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

