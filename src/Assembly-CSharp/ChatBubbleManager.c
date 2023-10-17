
/* Void ShowChatBubble(String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleManager::ChatBubbleManager_ShowChatBubble
               (String *text,int32_t anchorId,ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChatBubbleManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble !=
      (Action_3_String_Int32_ChatAnchor_ *)0x0) {
    pAVar1 = TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,text,anchorId,chatBubbleAnchor,
               (pAVar1->fields)._._.method);
  }
  return;
}

