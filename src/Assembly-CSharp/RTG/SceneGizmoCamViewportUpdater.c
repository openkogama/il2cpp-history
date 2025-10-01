
/* Void Update(RTSceneGizmoCamera) */

void Assembly-CSharp.dll::RTG::SceneGizmoCamViewportUpdater::SceneGizmoCamViewportUpdater_Update
               (SceneGizmoCamViewportUpdater *this,RTSceneGizmoCamera *sceneGizmoCamera,
               MethodInfo *method)

{
  pSVar1 = (this->fields)._sceneGizmo;
  if ((pSVar1 == (SceneGizmo *)0x0) ||
     (this_00 = (&(pSVar1->fields)._lookAndFeel)
                [(pSVar1->fields)._sharedLookAndFeel != (SceneGizmoLookAndFeel *)0x0],
     this_00 == (SceneGizmoLookAndFeel *)0x0)) goto code_?;
  fStack_2 = (this_00->fields)._screenOffset.x;
  fVar3 = (this_00->fields)._screenOffset.y;
  if ((sceneGizmoCamera == (RTSceneGizmoCamera *)0x0) ||
     (pCVar4 = (sceneGizmoCamera->fields)._sceneCamera, pCVar4 == (Camera *)0x0))
  goto code_?;
  pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelRect
                     ((Rect *)&stack0xffffffd8,pCVar4,(MethodInfo *)0x0);
  fVar6 = pRVar5->m_XMin;
  fVar7 = pRVar5->m_YMin;
  fVar8 = pRVar5->m_Width;
  fVar9 = pRVar5->m_Height;
  VVar10 = SceneGizmoLookAndFeel::SceneGizmoLookAndFeel_CalculateMaxPrjSwitchLabelRectSize
                     (this_00,(MethodInfo *)0x0);
  fVar11 = (this_00->fields)._screenSize;
  bVar12 = (this_00->fields)._isCamPrjSwitchLabelVisible;
  if ((this_00->fields)._screenCorner == 1) {
    fVar6 = (fVar6 + fVar8) - fVar11;
code_?:
    fStack_2 = fStack_2 + fVar6;
    pCVar4 = (sceneGizmoCamera->fields)._camera;
    fVar7 = (fVar7 + fVar9) - fVar11;
  }
  else {
    if ((this_00->fields)._screenCorner == 0) goto code_?;
    fStack_13 = VVar10.y;
    if ((this_00->fields)._screenCorner == 2) {
      if (bVar12 == 0) {
        fStack_13 = 0.0;
      }
      else {
        fStack_13 = fStack_13 + _UNK_?;
      }
      pCVar4 = (sceneGizmoCamera->fields)._camera;
      fStack_2 = fStack_2 + ((fVar6 + fVar8) - fVar11);
      fVar7 = fVar7 + fStack_13;
    }
    else {
      pCVar4 = (sceneGizmoCamera->fields)._camera;
      if (bVar12 == 0) {
        fStack_13 = 0.0;
      }
      else {
        fStack_13 = fStack_13 + _UNK_?;
      }
      fStack_2 = fStack_2 + fVar6;
      fVar7 = fVar7 + fStack_13;
    }
  }
  if (pCVar4 != (Camera *)0x0) {
    value.m_YMin = fVar7 + fVar3;
    value.m_XMin = fStack_2;
    value.m_Width = fVar11;
    value.m_Height = fVar11;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_pixelRect
              (pCVar4,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

