
/* Void ShowChatBubble(String, String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleManager::ChatBubbleManager_ShowChatBubble
               (String *text,String *senderName,int32_t anchorId,ChatAnchor *chatBubbleAnchor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatBubbleManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble;
  if (pAVar1 != (Action_4_String_String_Int32_ChatAnchor_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,text,senderName,anchorId,chatBubbleAnchor,
               (pAVar1->fields)._._.method);
  }
  return;
}

