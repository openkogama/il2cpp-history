
/* Boolean IsKeyPressed(KeyCode) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsKeyPressed
               (KeyCode__Enum keyCode,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(keyCode);
  return bVar1;
}


/* Boolean IsLeftMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsLeftMouseButtonPressed(MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                    (0,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean IsMiddleMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsMiddleMouseButtonPressed(MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                    (2,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean IsMouseButtonPressed(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsMouseButtonPressed
               (int32_t mouseButton,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(mouseButton);
  return bVar1;
}


/* Boolean IsRightMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsRightMouseButtonPressed(MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButton
                    (1,(MethodInfo *)0x0);
  return bVar1;
}


/* Single MouseAxisX() */

float Assembly-CSharp.dll::RTG::RTInput::RTInput_MouseAxisX(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  return fVar1;
}


/* Single MouseAxisY() */

float Assembly-CSharp.dll::RTG::RTInput::RTInput_MouseAxisY(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_Y);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
  return fVar1;
}


/* Single MouseScroll() */

float Assembly-CSharp.dll::RTG::RTInput::RTInput_MouseScroll(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
  return fVar1;
}


/* Boolean TouchBegan(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchBegan(int32_t touchIndex,MethodInfo *method)

{
  func_?(auStack_1,0,0x44);
  pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     (&TStack_3,touchIndex,(MethodInfo *)0x0);
  auStack_1._0_4_ = pTVar2->m_FingerId;
  auStack_1._4_4_ = (pTVar2->m_Position).x;
  auStack_1._8_4_ = (pTVar2->m_Position).y;
  fStack_4 = (pTVar2->m_RawPosition).x;
  fStack_5 = (pTVar2->m_RawPosition).y;
  pFStack_6 = (Func_2_Single_Single_ *)(pTVar2->m_PositionDelta).x;
  fStack_7 = (pTVar2->m_PositionDelta).y;
  pAStack_8 = (Action *)pTVar2->m_TimeDelta;
  iStack_9 = pTVar2->m_TapCount;
  pVStack_10 = (VisualElement *)pTVar2->m_Phase;
  pAStack_11 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_Type;
  pFStack_12 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_Pressure;
  pFStack_13 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_maximumPossiblePressure;
  SStack_14.m_StyleValues = (StyleValueCollection *)pTVar2->m_Radius;
  fStack_15 = pTVar2->m_RadiusVariance;
  SStack_16.m_StyleValues = (StyleValueCollection *)pTVar2->m_AltitudeAngle;
  fStack_17 = pTVar2->m_AzimuthAngle;
  pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
           ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                     ((ValueAnimation_1_StyleValues_ *)auStack_1,(MethodInfo *)0x0);
  return pVVar18 == (VisualElement *)0x0;
}


/* Vector2 TouchDelta(Int32) */

Vector2 Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchDelta(int32_t touchIndex,MethodInfo *method)

{
  func_?(&TStack_1,0,0x44);
  pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     (&TStack_3,touchIndex,(MethodInfo *)0x0);
  TStack_1.m_FingerId = pTVar2->m_FingerId;
  TStack_1.m_Position.x = (pTVar2->m_Position).x;
  TStack_1.m_Position.y = (pTVar2->m_Position).y;
  TStack_1.m_RawPosition.x = (pTVar2->m_RawPosition).x;
  TStack_1.m_RawPosition.y = (pTVar2->m_RawPosition).y;
  TStack_1.m_PositionDelta.x = (pTVar2->m_PositionDelta).x;
  TStack_1.m_PositionDelta.y = (pTVar2->m_PositionDelta).y;
  TStack_1.m_TimeDelta = pTVar2->m_TimeDelta;
  TStack_1.m_TapCount = pTVar2->m_TapCount;
  TStack_1.m_Phase = pTVar2->m_Phase;
  TStack_1.m_Type = pTVar2->m_Type;
  TStack_1.m_Pressure = pTVar2->m_Pressure;
  TStack_1.m_maximumPossiblePressure = pTVar2->m_maximumPossiblePressure;
  TStack_1.m_Radius = pTVar2->m_Radius;
  TStack_1.m_RadiusVariance = pTVar2->m_RadiusVariance;
  TStack_1.m_AltitudeAngle = pTVar2->m_AltitudeAngle;
  TStack_1.m_AzimuthAngle = pTVar2->m_AzimuthAngle;
  VVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaPosition
                    (&TStack_1,(MethodInfo *)0x0);
  return VVar4;
}


/* Boolean TouchEndedOrCanceled(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchEndedOrCanceled
               (int32_t touchIndex,MethodInfo *method)

{
  func_?(auStack_1,0,0x44);
  pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     ((Touch *)&stack0xffffff74,touchIndex,(MethodInfo *)0x0);
  auStack_1._0_4_ = pTVar2->m_FingerId;
  auStack_1._4_4_ = (pTVar2->m_Position).x;
  auStack_1._8_4_ = (pTVar2->m_Position).y;
  fStack_3 = (pTVar2->m_RawPosition).x;
  fStack_4 = (pTVar2->m_RawPosition).y;
  pFStack_5 = (Func_2_Single_Single_ *)(pTVar2->m_PositionDelta).x;
  fStack_6 = (pTVar2->m_PositionDelta).y;
  pAStack_7 = (Action *)pTVar2->m_TimeDelta;
  iStack_8 = pTVar2->m_TapCount;
  pVStack_9 = (VisualElement *)pTVar2->m_Phase;
  pAStack_10 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_Type;
  pFStack_11 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_Pressure;
  pFStack_12 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_maximumPossiblePressure;
  SStack_13.m_StyleValues = (StyleValueCollection *)pTVar2->m_Radius;
  fStack_14 = pTVar2->m_RadiusVariance;
  SStack_15.m_StyleValues = (StyleValueCollection *)pTVar2->m_AltitudeAngle;
  fStack_16 = pTVar2->m_AzimuthAngle;
  pVVar17 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
           ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                     ((ValueAnimation_1_StyleValues_ *)auStack_1,(MethodInfo *)0x0);
  if (pVVar17 == (VisualElement *)0x3) {
    return 1;
  }
  pVVar17 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
           ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                     ((ValueAnimation_1_StyleValues_ *)auStack_1,(MethodInfo *)0x0);
  return pVVar17 == (VisualElement *)0x4;
}


/* Boolean TouchMoved(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchMoved(int32_t touchIndex,MethodInfo *method)

{
  func_?(auStack_1,0,0x44);
  pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     (&TStack_3,touchIndex,(MethodInfo *)0x0);
  auStack_1._0_4_ = pTVar2->m_FingerId;
  auStack_1._4_4_ = (pTVar2->m_Position).x;
  auStack_1._8_4_ = (pTVar2->m_Position).y;
  fStack_4 = (pTVar2->m_RawPosition).x;
  fStack_5 = (pTVar2->m_RawPosition).y;
  pFStack_6 = (Func_2_Single_Single_ *)(pTVar2->m_PositionDelta).x;
  fStack_7 = (pTVar2->m_PositionDelta).y;
  pAStack_8 = (Action *)pTVar2->m_TimeDelta;
  iStack_9 = pTVar2->m_TapCount;
  pVStack_10 = (VisualElement *)pTVar2->m_Phase;
  pAStack_11 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_Type;
  pFStack_12 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_Pressure;
  pFStack_13 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                *)pTVar2->m_maximumPossiblePressure;
  SStack_14.m_StyleValues = (StyleValueCollection *)pTVar2->m_Radius;
  fStack_15 = pTVar2->m_RadiusVariance;
  SStack_16.m_StyleValues = (StyleValueCollection *)pTVar2->m_AltitudeAngle;
  fStack_17 = pTVar2->m_AzimuthAngle;
  pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
           ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                     ((ValueAnimation_1_StyleValues_ *)auStack_1,(MethodInfo *)0x0);
  return pVVar18 == (VisualElement *)0x1;
}


/* Vector2 TouchPosition(Int32) */

Vector2 Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchPosition
                  (int32_t touchIndex,MethodInfo *method)

{
  func_?(&TStack_1,0,0x44);
  pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     (&TStack_3,touchIndex,(MethodInfo *)0x0);
  TStack_1.m_FingerId = pTVar2->m_FingerId;
  TStack_1.m_Position.x = (pTVar2->m_Position).x;
  TStack_1.m_Position.y = (pTVar2->m_Position).y;
  TStack_1.m_RawPosition.x = (pTVar2->m_RawPosition).x;
  TStack_1.m_RawPosition.y = (pTVar2->m_RawPosition).y;
  TStack_1.m_PositionDelta.x = (pTVar2->m_PositionDelta).x;
  TStack_1.m_PositionDelta.y = (pTVar2->m_PositionDelta).y;
  TStack_1.m_TimeDelta = pTVar2->m_TimeDelta;
  TStack_1.m_TapCount = pTVar2->m_TapCount;
  TStack_1.m_Phase = pTVar2->m_Phase;
  TStack_1.m_Type = pTVar2->m_Type;
  TStack_1.m_Pressure = pTVar2->m_Pressure;
  TStack_1.m_maximumPossiblePressure = pTVar2->m_maximumPossiblePressure;
  TStack_1.m_Radius = pTVar2->m_Radius;
  TStack_1.m_RadiusVariance = pTVar2->m_RadiusVariance;
  TStack_1.m_AltitudeAngle = pTVar2->m_AltitudeAngle;
  TStack_1.m_AzimuthAngle = pTVar2->m_AzimuthAngle;
  VVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                    (&TStack_1,(MethodInfo *)0x0);
  return VVar4;
}


/* Boolean WasKeyPressedThisFrame(KeyCode) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasKeyPressedThisFrame
               (KeyCode__Enum keyCode,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(keyCode);
  return bVar1;
}


/* Boolean WasLeftMouseButtonPressedThisFrame() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasLeftMouseButtonPressedThisFrame
               (MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButtonDown
                    (0,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean WasMiddleMouseButtonPressedThisFrame() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasMiddleMouseButtonPressedThisFrame
               (MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButtonDown
                    (2,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean WasMouseButtonPressedThisFrame(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasMouseButtonPressedThisFrame
               (int32_t mouseButton,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(mouseButton);
  return bVar1;
}


/* Boolean WasMouseButtonReleasedThisFrame(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasMouseButtonReleasedThisFrame
               (int32_t mouseButton,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(mouseButton);
  return bVar1;
}


/* Boolean WasMouseMoved() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasMouseMoved(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  if (fVar1 == 0.0) {
    fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
            InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    if (fVar1 == 0.0) {
      return 0;
    }
  }
  return 1;
}


/* Boolean WasRightMouseButtonPressedThisFrame() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasRightMouseButtonPressedThisFrame
               (MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetMouseButtonDown
                    (1,(MethodInfo *)0x0);
  return bVar1;
}

